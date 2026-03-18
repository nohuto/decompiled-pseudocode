/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x140100FD8
 * Callers:
 *     DrvBuildDevmodeList @ 0x1401180B8 (DrvBuildDevmodeList.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ldevLoadDriver @ 0x140101130 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1401015E0 (ldevUnloadImage.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  unsigned int v7; // ebx
  __int64 Driver; // rax
  void *v9; // r14
  __int64 (__fastcall *v10)(void *, _QWORD, struct _devicemodeW *); // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  struct _devicemodeW *v13; // rax
  int v14; // eax
  unsigned int v16; // r8d
  char *v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // eax

  *a4 = 0LL;
  v7 = 0;
  Driver = ldevLoadDriver(a2);
  v9 = (void *)Driver;
  if ( Driver )
  {
    v10 = *(__int64 (__fastcall **)(void *, _QWORD, struct _devicemodeW *))(Driver + 400);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10(a3, 0LL, 0LL);
        v12 = v11;
        if ( !v11 )
          break;
        v13 = (struct _devicemodeW *)PALLOCNOZ(v11, 0x73726447u);
        *a4 = v13;
        if ( !v13 )
          break;
        v7 = v10(a3, v12, v13);
        v14 = *((_DWORD *)a1 + 40);
        if ( (v14 & 0x800000) == 0 || v7 != -1 )
        {
          if ( (v14 & 0x4000000) != 0 )
          {
            v16 = 0;
            if ( v7 )
            {
              v17 = (char *)*a4;
              do
              {
                v18 = v16;
                v16 += *(unsigned __int16 *)&v17[v16 + 70] + *(unsigned __int16 *)&v17[v16 + 68];
                v19 = 0;
                if ( *(_DWORD *)&v17[v18 + 168] == 32 )
                  v19 = v7;
                v7 = v19;
              }
              while ( v16 < v19 );
            }
          }
          break;
        }
        GreDeleteFastMutex((char *)*a4);
      }
    }
    ldevUnloadImage(v9);
    if ( v7 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v7;
}
