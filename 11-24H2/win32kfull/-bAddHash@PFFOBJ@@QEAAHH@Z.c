/*
 * XREFs of ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1400FE5E4
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x140113770 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140221180 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030DDA0 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x1400FE5A8 (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1400FE730 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x1400FF884 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 */

__int64 __fastcall PFFOBJ::bAddHash(__int64 **this, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v5; // rdi
  Gre::Base *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 *v10; // rsi
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 i; // rbx
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v8 = *((_QWORD *)Gre::Base::Globals(v6) + 221);
  ++*(_DWORD *)(v8 + 1573016);
  v9 = *this;
  if ( (*this)[11] )
  {
    if ( PFFOBJ::bInPrivatePFT((PFFOBJ *)this, v7, v8) )
      v11 = *(__int64 **)(v5 + 20408);
    else
      v11 = *(__int64 **)(v5 + 20416);
    v10 = v11 + 1;
    v12 = v11 + 2;
    if ( UmfdIsUmfdTrueTypePff((const struct PFF *)*this) )
      ++*(_DWORD *)(v5 + 20368);
  }
  else
  {
    v10 = v9 + 14;
    v11 = v9 + 15;
    v12 = v9 + 16;
  }
  v13 = *v12;
  v14 = *v11;
  v15 = *v10;
  v19[0] = v11;
  v19[1] = v14;
  v20[0] = v10;
  v20[1] = v15;
  v18[0] = v12;
  v18[1] = v13;
  if ( !v13 || !v14 || !v15 )
    return 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)*this + 54); i = (unsigned int)(i + 1) )
  {
    v21 = (*this)[i + 28];
    if ( !(unsigned int)FHOBJ::bInsert((FHOBJ *)v18, (struct PFEOBJ *)&v21)
      || !v3
      && (!(unsigned int)FHOBJ::bInsert((FHOBJ *)v19, (struct PFEOBJ *)&v21)
       || !(unsigned int)FHOBJ::bInsert((FHOBJ *)v20, (struct PFEOBJ *)&v21)) )
    {
      return 0LL;
    }
  }
  return 1LL;
}
