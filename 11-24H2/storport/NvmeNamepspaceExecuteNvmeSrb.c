/*
 * XREFs of NvmeNamepspaceExecuteNvmeSrb @ 0x1400FB5C8
 * Callers:
 *     NvmeNamespaceScsiIrp @ 0x14010D8B8 (NvmeNamespaceScsiIrp.c)
 * Callees:
 *     NvmeAdapterMapBuffers @ 0x1400D3F6C (NvmeAdapterMapBuffers.c)
 *     MdlToNVMeCommandPrp @ 0x1400FA908 (MdlToNVMeCommandPrp.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeNamepspaceExecuteNvmeSrb(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r12d
  __int64 v6; // rbx
  void *v7; // r15
  _OWORD *v8; // rdi
  char v9; // r13
  int v10; // ecx
  int v11; // ebx
  const void *v12; // rdx
  __int64 result; // rax
  __int64 ExtendedCommand; // rax
  __int64 *v15; // rsi
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx
  _OWORD *v19; // rax
  int v20; // ebx
  __int64 v21; // r15
  __int64 v22; // rdi
  int v23; // r12d
  __int64 v24; // r13
  KIRQL v25; // bp
  _OWORD *v26; // rax
  bool v27; // [rsp+38h] [rbp-60h]
  int v28; // [rsp+38h] [rbp-60h]
  bool v29; // [rsp+A8h] [rbp+10h]
  __int64 v30; // [rsp+B0h] [rbp+18h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v4 + 2) != 40 )
    return (unsigned int)-1073741823;
  v5 = *(_DWORD *)(v4 + 60);
  v6 = v4 + *(unsigned int *)(v4 + 120);
  v7 = *(void **)(v4 + 64);
  *(_BYTE *)(v4 + 3) = 0;
  v8 = (_OWORD *)(v6 + 16);
  v9 = *(_BYTE *)(v6 + 82) & 3;
  v10 = (unsigned __int8)*(_DWORD *)(v6 + 16);
  if ( (unsigned int)(v10 - 1) > 1 )
  {
    if ( v9 && (!v7 || !v5 || !*(_QWORD *)(a2 + 8)) )
      return (unsigned int)-1073741811;
    if ( DisableIEEE1667 )
    {
      if ( *(_BYTE *)(v6 + 80) != 1 )
        goto LABEL_21;
      if ( (unsigned int)(v10 - 129) <= 1 && *(_BYTE *)(v6 + 59) == 0xEE )
        return (unsigned int)-1073741637;
    }
    if ( *(_BYTE *)(v6 + 80) == 1 && v10 == 6 && !*(_BYTE *)(v6 + 56) )
    {
      if ( v7 )
      {
        if ( v5 >= 0x1000 )
        {
          v12 = *(const void **)(a1 + 176);
          if ( v12 )
          {
            memmove(v7, v12, 0x1000uLL);
            result = 0LL;
            *(_QWORD *)(a2 + 56) = 4096LL;
            return result;
          }
        }
      }
    }
LABEL_21:
    ExtendedCommand = NvmeControllerGetExtendedCommand(*(_QWORD *)(a1 + 16));
    v15 = (__int64 *)ExtendedCommand;
    if ( !ExtendedCommand )
      return (unsigned int)-1073741670;
    *(_BYTE *)(a2 + 141) = -88;
    v16 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL);
    v17 = *(_QWORD *)ExtendedCommand;
    if ( *(_BYTE *)(v6 + 80) == 1 )
      v18 = v16 | 1;
    else
      v18 = v16 & 0xFFFFFFFE;
    *(_DWORD *)(v17 + 4256) = v18;
    *(_DWORD *)(*v15 + 4256) |= 0x20u;
    *(_DWORD *)(*v15 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v15 + 4256) ^ (unsigned __int8)(2 * v9)) & 2;
    *(_QWORD *)(*v15 + 4184) = a2;
    *(_QWORD *)(*v15 + 4192) = NvmeNamespaceExecuteNvmeSrbComplete;
    *(_QWORD *)(*v15 + 4200) = v15;
    *(_QWORD *)(*v15 + 4216) = a1;
    *(_QWORD *)(*v15 + 4232) = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(*v15 + 4256) & 2) != 0 )
    {
      *(_QWORD *)(*v15 + 4160) = v7;
      *(PHYSICAL_ADDRESS *)(*v15 + 4168) = MmGetPhysicalAddress(v7);
      *(_DWORD *)(*v15 + 4248) = v5;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL) & 0x100000000LL) == 0 )
      {
        *(_DWORD *)(*v15 + 4256) &= ~0x200u;
        v19 = (_OWORD *)*v15;
        v19[256] = *v8;
        v19[257] = *(_OWORD *)(v6 + 32);
        v19[258] = *(_OWORD *)(v6 + 48);
        v19[259] = *(_OWORD *)(v6 + 64);
        v20 = *(_DWORD *)(*v15 + 4256);
        v21 = *(_QWORD *)(a2 + 8);
        v22 = v15[7];
        v23 = *(_DWORD *)(*v15 + 4248);
        v24 = *(_QWORD *)(*v15 + 4160);
        v30 = *(_QWORD *)(a1 + 16);
        v25 = KfRaiseIrql(2u);
        v27 = (v20 & 0x200) != 0;
        v29 = v27;
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64 *, bool, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL) + 8LL) + 112LL))(
                *(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL),
                *(_QWORD *)(*(_QWORD *)(v30 + 128) + 8LL),
                v21,
                v24,
                v23,
                NvmeContinueScatterGatherProcessCommand,
                v15,
                v27,
                v22,
                584);
        if ( v11 == -1073741789 )
        {
          LOBYTE(v28) = v29;
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64 *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL) + 8LL) + 88LL))(
                  *(_QWORD *)(*(_QWORD *)(v30 + 128) + 1144LL),
                  *(_QWORD *)(*(_QWORD *)(v30 + 128) + 8LL),
                  v21,
                  v24,
                  v23,
                  NvmeContinueScatterGatherProcessCommand,
                  v15,
                  v28);
        }
        if ( v25 < 2u )
          KeLowerIrql(v25);
        if ( v11 >= 0 )
          return 259;
LABEL_36:
        _interlockedbittestandreset((volatile signed __int32 *)(*v15 + 4256), 3u);
        NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), v15);
        return (unsigned int)v11;
      }
      v11 = MdlToNVMeCommandPrp(v6 + 16, v5, *(_DWORD **)(a2 + 8), (_QWORD *)*v15, v15[1]);
      if ( v11 < 0 )
        goto LABEL_36;
    }
    v26 = (_OWORD *)*v15;
    v26[256] = *v8;
    v26[257] = v8[1];
    v26[258] = v8[2];
    v26[259] = v8[3];
    NvmeAdapterMapBuffers(*(_DWORD **)(*(_QWORD *)(a1 + 16) + 128LL), a2);
    v11 = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 16), v15);
    if ( v11 >= 0 )
      return (unsigned int)v11;
    goto LABEL_36;
  }
  return (unsigned int)-1073741595;
}
