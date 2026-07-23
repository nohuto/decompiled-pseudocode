/*
 * XREFs of MiDbgCopyMemory @ 0x14067F6A8
 * Callers:
 *     MmDbgCopyMemory @ 0x140680E78 (MmDbgCopyMemory.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeIsUserVaAccessAllowed @ 0x140421850 (KeIsUserVaAccessAllowed.c)
 *     KeGenericCallDpc @ 0x14048F660 (KeGenericCallDpc.c)
 *     MiAllocateDbgPatches @ 0x14067EFF8 (MiAllocateDbgPatches.c)
 *     MiCopyFromUntrustedMemory @ 0x14067F3E4 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x14067F52C (MiCopyToUntrustedMemory.c)
 *     MiDbgPatchIdentity @ 0x140680100 (MiDbgPatchIdentity.c)
 *     MiDbgPteWriteInProgress @ 0x1406801B8 (MiDbgPteWriteInProgress.c)
 *     MiDbgReleaseAddress @ 0x1406802C0 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140680788 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x140680874 (MiDbgWriteCheck.c)
 *     MiFillDbgPatches @ 0x140680BCC (MiFillDbgPatches.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

__int64 __fastcall MiDbgCopyMemory(_BYTE *a1, _BYTE *a2, unsigned int a3, unsigned int a4, int a5)
{
  SIZE_T v5; // r13
  unsigned int v9; // ebx
  int v10; // r9d
  unsigned int v11; // edi
  int v12; // r12d
  int DbgPatches; // esi
  PHYSICAL_ADDRESS v14; // rax
  LONGLONG v15; // rdx
  __int64 v16; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v18; // ecx
  size_t Size; // [rsp+20h] [rbp-108h]
  int v20; // [rsp+30h] [rbp-F8h]
  __int64 v22; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-D0h]
  _QWORD v25[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v26; // [rsp+70h] [rbp-B8h]
  int v27; // [rsp+74h] [rbp-B4h]
  int v28; // [rsp+78h] [rbp-B0h]
  unsigned int v29; // [rsp+7Ch] [rbp-ACh]
  _OWORD v30[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-88h]
  __int64 v32; // [rsp+B0h] [rbp-78h]
  __int128 v33; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-50h]

  v5 = a3;
  v24 = a2;
  v23 = 0LL;
  memset(v30, 0, sizeof(v30));
  v31 = 0LL;
  v32 = 0LL;
  v29 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( !a3 )
    return 3221225713LL;
  if ( (a5 & 0x40) != 0 && ((a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0) )
    return 3221225714LL;
  v22 = -1LL;
  v9 = KeIsUserVaAccessAllowed(0LL) ? 2 : 0;
  v11 = a5 | 0x80000000;
  if ( (a5 & 2) != 0 )
  {
    if ( (a5 & 4) != 0 || KeGetCurrentIrql() <= 1u )
    {
      a1 = (_BYTE *)MiDbgTranslatePhysicalAddress(a1, v11, v30);
      if ( !a1 )
        return 3221225473LL;
LABEL_41:
      v18 = v11 & 6;
      if ( v18 == 4 && KeSmapEnabled )
        __asm { stac }
      if ( (v11 & 1) != 0 )
      {
        if ( v18 == 2 && *((_QWORD *)&v31 + 1) )
        {
          DbgPatches = -1073741823;
          goto LABEL_58;
        }
        v12 = MiDbgWriteCheck((_DWORD)a1, (unsigned int)&v23, v11, v30[0], (__int64)&v22, (__int64)&v33);
        if ( !v12 )
        {
          DbgPatches = -1073741585;
          goto LABEL_58;
        }
        v9 |= 1u;
        if ( (v11 & 2) != 0 && *((_QWORD *)&v31 + 1) )
        {
          DbgPatches = MiAllocateDbgPatches((__int16)a1, v5, (__int64)v30, (ULONG **)&v34);
          if ( DbgPatches >= 0 )
          {
            MiFillDbgPatches(a1, (unsigned int)v5, &v34, 1LL);
            goto LABEL_54;
          }
LABEL_58:
          if ( (v11 & 6) == 4 && v9 < 2 && KeSmapEnabled )
            __asm { clac }
          if ( (v9 & 1) != 0 )
            MiDbgReleaseAddress(a1, &v23, v11);
          if ( (v11 & 2) != 0 )
            MiDbgUnTranslatePhysicalAddress(v30);
          return (unsigned int)DbgPatches;
        }
LABEL_54:
        LODWORD(Size) = v5;
        DbgPatches = MiCopyToUntrustedMemory(a1, v22, (int)&v33, v24, Size, a4, v20, v12);
        if ( (v11 & 2) != 0 && *((_QWORD *)&v31 + 1) )
        {
          MiFillDbgPatches(a1, (unsigned int)v5, &v34, 0LL);
          _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
        }
        goto LABEL_58;
      }
      goto LABEL_57;
    }
    return 3221225714LL;
  }
  if ( (a5 & 4) == 0 )
  {
    if ( KeGetCurrentIrql() <= 1u )
    {
      v11 = a5 & 0x7FFFFFFF;
      if ( (unsigned __int64)a1 >= 0xFFFF800000000000uLL )
      {
        v25[0] = a1;
        v26 = v5;
        v25[1] = a2;
        v27 = v10;
        v28 = a5 & 0x7FFFFFFF;
        KeGenericCallDpc((__int64)MiDbgCopyMemoryTarget, (__int64)v25);
        return v29;
      }
      if ( (a5 & 1) != 0 )
      {
        ProbeForWrite(a1, v5, v5);
      }
      else if ( (((_DWORD)v5 - 1) & (unsigned int)a1) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (a5 & 1) != 0 )
      {
        v12 = 1;
        goto LABEL_54;
      }
LABEL_57:
      DbgPatches = MiCopyFromUntrustedMemory(a2, a1, v5, a4);
      goto LABEL_58;
    }
    return 3221225714LL;
  }
  v11 = a5 | 0xC0000000;
  if ( MmIsAddressValidEx((__int64)a1) )
  {
    if ( (a5 & 0x41) != 0 && (MiFlags & 0x10000000) != 0 )
    {
      v14.QuadPart = (unsigned __int64)MmGetPhysicalAddress(a1).QuadPart >> 12;
      v15 = 6 * v14.QuadPart;
      if ( v14.QuadPart <= (unsigned __int64)qword_140E2DD20 )
        v16 = (*(_QWORD *)(48 * v14.QuadPart - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
      else
        LODWORD(v16) = 0;
      if ( (_DWORD)v16 && (unsigned int)MiDbgPatchIdentity(8 * v15 - 0x220000000000LL, 0LL, 0LL) )
        v11 = a5 | 0xC0000040;
    }
    if ( (v11 & 0x40) == 0 )
      goto LABEL_41;
    PhysicalAddress = MmGetPhysicalAddress(a1);
    a1 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                    (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                    v11,
                    v30);
    if ( !a1 )
      return (unsigned int)-1073741823;
LABEL_40:
    v11 |= 2u;
    goto LABEL_41;
  }
  if ( (a5 & 0x80u) == 0 )
    a1 = 0LL;
  else
    a1 = (_BYTE *)MiDbgPteWriteInProgress(a1, v11, v30);
  if ( a1 )
    goto LABEL_40;
  return (unsigned int)-1073741585;
}
