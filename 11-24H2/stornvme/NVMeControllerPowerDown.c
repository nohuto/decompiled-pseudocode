/*
 * XREFs of NVMeControllerPowerDown @ 0x1400109D0
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeHwStartIo @ 0x140018740 (NVMeHwStartIo.c)
 * Callees:
 *     NVMeSetHostMemoryBuffer @ 0x140006A20 (NVMeSetHostMemoryBuffer.c)
 *     IoQueuesDeletion @ 0x140007DE0 (IoQueuesDeletion.c)
 *     WaitUntilAllAdminCommandsAreInSubmssionQueue @ 0x14001EFF0 (WaitUntilAllAdminCommandsAreInSubmssionQueue.c)
 */

char __fastcall NVMeControllerPowerDown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int128 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbp
  int v8; // esi
  unsigned __int64 v9; // r9
  int v10; // eax
  void *Src; // rcx
  unsigned int v12; // r9d
  char v13; // cl
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // r10d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // r9
  unsigned int v22; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  *((_QWORD *)&v4 + 1) = a2;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 1560);
  if ( (*(_DWORD *)(a1 + 4336) & 2) == 0 )
    goto LABEL_7;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 5u);
  v8 = 0;
  while ( (*(_DWORD *)(a1 + 3748) & 0x80u) != 0 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, a4);
    if ( (unsigned int)++v8 >= 0x3E8 )
      goto LABEL_6;
  }
  if ( !(unsigned __int8)WaitUntilAllAdminCommandsAreInSubmssionQueue(a1) )
LABEL_6:
    *(_DWORD *)(a1 + 4064) |= 0x40000u;
LABEL_7:
  v9 = *(_QWORD *)(a1 + 3720);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 4);
    Src = (void *)(v9 + 8);
    v12 = *(_DWORD *)v9;
    LODWORD(Size) = v10;
    NVMeSetHostMemoryBuffer(a1, 0, 0, v12, Src, Size);
  }
  v13 = *(_BYTE *)(a1 + 3728);
  if ( (v13 & 3) == 3 )
    *(_BYTE *)(a1 + 3728) = v13 | 4;
  v14 = *(_DWORD *)(v6 + 88);
  if ( v14 )
  {
    a3 = v14;
    v9 = 0x346DC5D63886594BLL;
    v15 = 10000 * (v14 / 0x2710uLL);
    v16 = v15 + 10000;
    if ( v14 == v15 )
      v16 = v14;
    v4 = v16 * (unsigned __int128)0x346DC5D63886594BuLL;
    v17 = *((_QWORD *)&v4 + 1) >> 11;
  }
  else
  {
    LODWORD(v17) = 500;
  }
  v18 = *(unsigned __int8 *)(a1 + 47);
  if ( (_BYTE)v18 )
  {
    a3 = (unsigned int)v17;
    v19 = 100 * ((unsigned int)v17 / 0x64uLL);
    v20 = v19 + 100;
    if ( (unsigned int)v17 == v19 )
      v20 = (unsigned int)v17;
    *((_QWORD *)&v4 + 1) = (v20 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 47);
    v9 = v20 / 0x64;
    if ( (unsigned int)v9 > v18 )
      LODWORD(v4) = v9;
    LODWORD(v17) = 100 * v4;
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFDFA | 4;
  IoQueuesDeletion(a1, *((__int64 *)&v4 + 1), a3, v9);
  v22 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v22;
  _InterlockedOr(v24, 0);
  if ( !(_DWORD)v17 )
    goto LABEL_27;
  while ( 1 )
  {
    LOBYTE(v22) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 0xC;
    if ( (_BYTE)v22 == 8 )
      break;
    LOBYTE(v22) = StorPortExtendedFunction(81LL, a1, 10000LL, v21);
    if ( ++v5 >= (unsigned int)v17 )
      goto LABEL_27;
  }
  if ( v5 >= (unsigned int)v17 )
LABEL_27:
    *(_DWORD *)(a1 + 24) |= 0x200000u;
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 5u);
  return v22;
}
