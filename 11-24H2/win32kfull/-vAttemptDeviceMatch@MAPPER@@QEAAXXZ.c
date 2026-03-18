/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140311B7C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B96C8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400BA59C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400FBF10 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1401700E8 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ulCharsetToCodePage @ 0x1401781C0 (ulCharsetToCodePage.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x140178A84 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019494C (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1401D4D9C (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this, __int64 a2)
{
  bool v2; // zf
  struct PFF *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  _DWORD *v7; // rax
  struct PFE *i; // rax
  __int64 v9; // rdx
  struct PFE *v10; // rdi
  unsigned int v11; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h]
  unsigned __int8 v14; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v15; // [rsp+58h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 276) == 2;
  v14 = 1;
  if ( !v2 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v12, a2);
    v4 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v12, **(_QWORD **)this, 0LL);
    if ( v4 )
    {
      v6 = (_QWORD *)((char *)v4 + 120);
      if ( v4 != (struct PFF *)-120LL )
      {
        v7 = (_DWORD *)*((_QWORD *)this + 29);
        v12[0] = v6;
        v13 = 0LL;
        *v7 &= v5;
        *((_QWORD *)this + 25) &= v5;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) &= v5;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 61) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v12[1] = *v6;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v12); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v12) )
        {
          v10 = i;
          if ( !i )
            break;
          v15 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, &v15, &v14, 0) )
          {
            v11 = *((_DWORD *)this + 46);
            if ( !v11 )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v15 + 4) + *(int *)(*((_QWORD *)v15 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v10, 1, v14);
                return;
              }
              v11 = ++*((_DWORD *)this + 46);
            }
            if ( v11 < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v10, 1, v14);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
          **((_DWORD **)this + 29) |= (unsigned int)ulCharsetToCodePage(
                                                      *(unsigned __int8 *)(*((_QWORD *)this + 29) + 3LL),
                                                      v9) << 8;
      }
    }
  }
}
