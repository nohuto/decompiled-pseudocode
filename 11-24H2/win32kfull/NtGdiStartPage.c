/*
 * XREFs of NtGdiStartPage @ 0x14020E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D8650 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x140153D60 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x140268328 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x140327818 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // rdi
  DC *v11[14]; // [rsp+20h] [rbp-78h] BYREF

  v1 = (int)a1;
  v2 = 0;
  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    if ( !*((_QWORD *)v11[0] + 62) || DC::bInFullScreen(v11[0]) || (v7 = v1 & 0x7F0000, v7 == 0x10000) || v7 == 6684672 )
    {
      EngSetLastError(6u);
    }
    else
    {
      v8 = *(_QWORD *)(v5 + 496);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v5 + 48);
        if ( *(_QWORD *)(v9 + 2552) )
        {
          if ( (*(_DWORD *)(v9 + 40) & 0x8000) != 0 )
          {
            if ( (*(_DWORD *)(v5 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v11);
              *((_DWORD *)v11[0] + 11) &= ~2u;
            }
            if ( (!UmpdSecurityGateNoUmpdObj(v5, v4, v6) || *(_QWORD *)(v9 + 2944))
              && (v3 = (*(__int64 (__fastcall **)(__int64))(v9 + 2944))(v8 + 24)) != 0 )
            {
              if ( v11 )
                XDCOBJ::vSaveAttributesAlways((XDCOBJ *)v11);
              *((_DWORD *)v11[0] + 9) |= 0x100u;
              *((_DWORD *)v11[0] + 526) = 0;
              *((_DWORD *)v11[0] + 527) = 0;
            }
            else
            {
              if ( v11 )
                XDCOBJ::vSaveAttributesAlways((XDCOBJ *)v11);
              bEndDocInternal((struct XDCOBJ *)v11, 1u);
            }
          }
        }
      }
    }
    v2 = v3;
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v2;
}
