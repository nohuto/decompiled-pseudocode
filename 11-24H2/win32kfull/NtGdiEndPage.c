/*
 * XREFs of NtGdiEndPage @ 0x140327D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400C384C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D8650 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x14026C538 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x14026CE04 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x14026DD50 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     GreDeleteWnd @ 0x140301670 (GreDeleteWnd.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // eax
  struct EWNDOBJ *v11; // rcx
  _QWORD v13[14]; // [rsp+20h] [rbp-78h] BYREF
  XDCOBJ *v14; // [rsp+A8h] [rbp+10h] BYREF

  v1 = (int)a1;
  v2 = 0;
  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v13) )
    {
      v7 = v1 & 0x7F0000;
      if ( v7 != 0x10000 && v7 != 6684672 )
      {
        v8 = *(_QWORD *)(v6 + 496);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v6 + 48);
          v10 = *(_DWORD *)(v9 + 40);
          if ( (v10 & 1) == 0 )
          {
            if ( *(_QWORD *)(v9 + 2552) )
            {
              v14 = 0LL;
              if ( (v10 & 0x8000) != 0 )
                RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v14, (struct XDCOBJ *)v13);
              if ( !UmpdSecurityGateNoUmpdObj(v5, v4, v6) || *(_QWORD *)(v9 + 2936) )
              {
                v3 = (*(__int64 (__fastcall **)(__int64))(v9 + 2936))(v8 + 24);
                if ( v3 )
                {
                  RESTORESAVEDCATTRS::vDone(&v14);
                  if ( (*(_DWORD *)(v9 + 40) & 0x8000) != 0 )
                  {
                    *(_DWORD *)(v13[0] + 36LL) &= ~0x100u;
                    v11 = *(struct EWNDOBJ **)(v8 + 136);
                    if ( v11 )
                    {
                      GreDeleteWnd(v11);
                      *(_QWORD *)(v8 + 136) = 0LL;
                    }
                    *(_WORD *)(v13[0] + 2088LL) = -1;
                  }
                }
              }
              RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v14);
            }
          }
        }
      }
    }
    v2 = v3;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  return v2;
}
