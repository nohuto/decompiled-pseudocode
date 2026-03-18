/*
 * XREFs of NtDCompositionGetTargetStatistics @ 0x1400EFC70
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x140073F6C (-QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCO.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetTargetStatistics(void *Src, void *a2, void *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  DirectComposition::CConnection *DefaultConnection; // rdi
  unsigned int v9; // edx
  unsigned __int64 v11; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-C8h]
  __int128 v13; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B0h]
  int v15; // [rsp+50h] [rbp-A8h]
  __int128 v16; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-90h]
  int v18; // [rsp+70h] [rbp-88h]
  _BYTE Srca[80]; // [rsp+80h] [rbp-78h] BYREF

  v5 = 0;
  v6 = 0LL;
  v12 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  if ( Src && a2 )
  {
    v11 = 0LL;
    RtlCopyFromUser(&v11, Src, 8uLL);
    v6 = v11;
    v12 = v11;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    RtlCopyFromUser(&v13, a2, 0x1CuLL);
    v16 = v13;
    v17 = v14;
    v18 = v15;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v7);
    if ( DefaultConnection )
    {
      memset(Srca, 0, 0x48uLL);
      if ( DirectComposition::CConnection::QueryTargetStats(
             DefaultConnection,
             v6,
             (const struct tagCOMPOSITION_TARGET_ID *)&v16,
             (struct tagCOMPOSITION_TARGET_STATS *)Srca) )
      {
        RtlCopyToUser(a3, Srca, 0x48uLL);
      }
      else
      {
        v5 = -1073741275;
      }
      DirectComposition::CConnection::Release(DefaultConnection, v9);
    }
    else
    {
      v5 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v5;
}
