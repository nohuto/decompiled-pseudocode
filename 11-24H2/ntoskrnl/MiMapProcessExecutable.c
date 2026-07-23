/*
 * XREFs of MiMapProcessExecutable @ 0x14091B024
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140398880 (MiFillPteHierarchy.c)
 *     MmMapViewOfSectionEx @ 0x14047E1D4 (MmMapViewOfSectionEx.c)
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 *     PsMapSystemDlls @ 0x14091B210 (PsMapSystemDlls.c)
 *     MiCfgInitializeProcess @ 0x14091BB10 (MiCfgInitializeProcess.c)
 *     MiMapAllImageScpPages @ 0x14091BCE0 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x14091C25C (MiCommitInitialVadMetadataBits.c)
 */

__int64 __fastcall MiMapProcessExecutable(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  int v5; // edi
  int v7; // eax
  __int64 v8; // r14
  __int64 result; // rax
  unsigned int v10; // r15d
  unsigned __int64 v11; // rcx
  BOOL v12; // edi
  unsigned __int64 v13; // rcx
  char v14; // al
  __int64 v15; // [rsp+58h] [rbp-21h]
  __int64 v16; // [rsp+70h] [rbp-9h] BYREF
  __int64 v17; // [rsp+78h] [rbp-1h] BYREF
  __int64 v18; // [rsp+80h] [rbp+7h]
  _OWORD v19[4]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v20; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a2 + 56);
  v5 = a2;
  memset(v19, 0, 32);
  if ( (v3 & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = PsSessionCreate(), (int)result >= 0) )
  {
    v7 = *a3;
    v21 = 0LL;
    v20 = 0LL;
    v16 = 0LL;
    v8 = 4LL;
    v17 = 5LL;
    v18 = 32LL;
    result = MmMapViewOfSectionEx(
               v5,
               a1,
               (int)&v20,
               (__int64)&v16,
               (__int64)&v21,
               (unsigned __int8)(v7 & 0x10) << 25,
               4,
               &v17,
               1,
               0,
               0LL,
               v15,
               0x2000000);
    v10 = result;
    if ( (int)result >= 0 )
    {
      v11 = v20;
      v12 = 0;
      *(_QWORD *)(a1 + 688) = v20;
      if ( (*a3 & 0x10) != 0 )
      {
        MiFillPteHierarchy(v11, (unsigned __int64 *)v19);
        while ( 1 )
        {
          v13 = *(&v18 + v8--);
          v14 = MI_READ_PTE_LOCK_FREE(v13);
          if ( (v14 & 1) == 0 )
          {
LABEL_17:
            *a3 &= ~0x10u;
            goto LABEL_5;
          }
          if ( v14 < 0 )
            break;
          if ( v8 == 1 )
            goto LABEL_17;
        }
        v12 = (*a3 & 0x20) != 0;
      }
LABEL_5:
      result = PsMapSystemDlls(a1, v12);
      if ( (int)result >= 0 )
      {
        result = MiCfgInitializeProcess(a1);
        if ( (int)result >= 0 )
        {
          result = MiCommitInitialVadMetadataBits();
          if ( (int)result >= 0 )
          {
            MiMapAllImageScpPages(a1);
            return v10;
          }
        }
      }
    }
  }
  return result;
}
