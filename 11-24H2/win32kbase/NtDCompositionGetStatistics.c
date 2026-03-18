/*
 * XREFs of NtDCompositionGetStatistics @ 0x1400D17F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x140073E24 (-QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPO.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetStatistics(void *Src, void *a2, unsigned int a3, __int64 a4, void *a5)
{
  unsigned int v9; // esi
  unsigned int v10; // ecx
  int v11; // ebx
  unsigned __int64 v12; // r12
  struct tagCOMPOSITION_TARGET_ID *v13; // rdi
  __int64 v14; // rcx
  DirectComposition::CConnection *DefaultConnection; // r14
  unsigned int v16; // edx
  unsigned int i; // r14d
  unsigned int v20[7]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-100h]
  void *v23; // [rsp+60h] [rbp-F8h]
  void *v24; // [rsp+68h] [rbp-F0h]
  __int64 v25; // [rsp+70h] [rbp-E8h]
  void *v26; // [rsp+78h] [rbp-E0h]
  __int128 Srca; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+90h] [rbp-C8h]
  _BYTE v29[112]; // [rsp+A0h] [rbp-B8h] BYREF

  v23 = a2;
  v24 = a2;
  v9 = a3;
  v20[3] = a3;
  v10 = a3;
  v25 = a4;
  v26 = a5;
  v11 = 0;
  v12 = 0LL;
  v22 = 0LL;
  v13 = 0LL;
  v20[2] = 0;
  Srca = 0LL;
  v28 = 0LL;
  *(_QWORD *)v20 = 0LL;
  if ( Src && a2 && (a4 || !a3) )
  {
    v21 = 0LL;
    RtlCopyFromUser(&v21, Src, 8uLL);
    v12 = v21;
    v22 = v21;
    v10 = a3;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    if ( v9 )
    {
      v9 = 256;
      if ( v10 <= 0x100 )
        v9 = a3;
      if ( v9 <= 4 )
      {
        v13 = (struct tagCOMPOSITION_TARGET_ID *)v29;
      }
      else
      {
        v13 = (struct tagCOMPOSITION_TARGET_ID *)Win32AllocPoolImpl(256LL, 28LL * v9, 0x61644344u);
        if ( !v13 )
          v11 = -1073741801;
      }
      *(_QWORD *)&v20[1] = v13;
    }
    if ( v11 >= 0 )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v14);
      if ( DefaultConnection )
      {
        if ( !DirectComposition::CConnection::QueryStats(
                DefaultConnection,
                v12,
                (struct tagCOMPOSITION_FRAME_STATS *)&Srca,
                v9,
                v13,
                v20) )
          v11 = -1073741275;
        DirectComposition::CConnection::Release(DefaultConnection, v16);
      }
      else
      {
        v11 = -1073741790;
      }
      KeLeaveCriticalRegion();
      if ( v11 >= 0 )
      {
        RtlCopyToUser(v23, &Srca, 0x18uLL);
        if ( a4 )
        {
          for ( i = 0; ; ++i )
          {
            v20[6] = i;
            if ( i >= v9 )
              break;
            RtlCopyToUser((void *)(a4 + 28LL * i), (char *)v13 + 28 * i, 0x1CuLL);
          }
        }
        if ( a5 )
          RtlCopyToUser(a5, v20, 4uLL);
      }
    }
  }
  if ( v13 && v13 != (struct tagCOMPOSITION_TARGET_ID *)v29 )
    GreDeleteFastMutex((char *)v13);
  return (unsigned int)v11;
}
