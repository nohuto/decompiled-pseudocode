/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029A768
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0110424 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0003F94 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C0086008 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0110BDC (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C015A29C (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C015A2D0 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C015A470 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ulCharsetToCodePage @ 0x1C015EC1A (ulCharsetToCodePage.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this)
{
  bool v1; // zf
  struct PFF *v3; // rax
  _QWORD *v4; // rcx
  _DWORD *v5; // rax
  struct PFE *i; // rax
  unsigned int v7; // eax
  struct PFE *v8; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h]
  unsigned __int8 v11; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v12; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_BYTE *)this + 284) == 2;
  v11 = 1;
  if ( !v1 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v9);
    v3 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v9, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( v3 )
    {
      v4 = (_QWORD *)((char *)v3 + 112);
      if ( v3 != (struct PFF *)-112LL )
      {
        v5 = (_DWORD *)*((_QWORD *)this + 29);
        v9[0] = v4;
        v10 = 0LL;
        *v5 = 0;
        *((_QWORD *)this + 25) = 0LL;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) = 0;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 63) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v9[1] = *v4;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v9); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v9) )
        {
          v8 = i;
          if ( !i )
            break;
          v12 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, (struct PFEOBJ *)&v12, &v11, 0) )
          {
            v7 = *((_DWORD *)this + 46);
            if ( !v7 )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v12 + 4) + *(int *)(*((_QWORD *)v12 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v8, 1, v11);
                return;
              }
              v7 = ++*((_DWORD *)this + 46);
            }
            if ( v7 < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v8, 1, v11);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
          **((_DWORD **)this + 29) |= (unsigned int)ulCharsetToCodePage((Gre::Base *)*(unsigned __int8 *)(*((_QWORD *)this + 29) + 3LL)) << 8;
      }
    }
  }
}
