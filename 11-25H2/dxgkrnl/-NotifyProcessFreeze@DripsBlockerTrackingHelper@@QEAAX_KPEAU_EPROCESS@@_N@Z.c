/*
 * XREFs of ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402ED02C
 * Callers:
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402ECFA8 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402EDAAC (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::NotifyProcessFreeze(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        char a4)
{
  unsigned int i; // esi
  __int64 v8; // rdi
  SIZE_T v9; // rax
  int v10; // eax
  int v11; // eax
  SIZE_T Length; // [rsp+30h] [rbp-58h] BYREF
  _OWORD Source2[2]; // [rsp+38h] [rbp-50h] BYREF
  char v14; // [rsp+58h] [rbp-30h]

  if ( *((_BYTE *)this + 302080) )
  {
    Length = 0LL;
    v14 = 0;
    memset(Source2, 0, sizeof(Source2));
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(this, 0LL, a3, (char *)Source2, 0x21u, &Length);
    if ( Length )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= 0x40 )
          return;
        v8 = 4720LL * i;
        if ( *((_BYTE *)this + v8 + 104) )
        {
          if ( *(_QWORD *)((char *)this + v8) == a2 )
          {
            v9 = RtlCompareMemory((char *)this + v8 + 8, Source2, Length);
            if ( v9 == Length )
              break;
          }
        }
      }
      v10 = *(_DWORD *)((char *)this + v8 + 108);
      if ( !a4 )
      {
        v11 = v10 + 1;
LABEL_11:
        *(_DWORD *)((char *)this + v8 + 108) = v11;
        return;
      }
      if ( v10 > 0 )
      {
        v11 = v10 - 1;
        goto LABEL_11;
      }
    }
  }
}
