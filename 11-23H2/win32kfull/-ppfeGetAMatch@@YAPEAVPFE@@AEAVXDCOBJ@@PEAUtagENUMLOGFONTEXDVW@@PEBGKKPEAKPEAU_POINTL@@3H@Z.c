/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0110424
 * Callers:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C010FF00 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0003F94 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0074C70 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0085734 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0110630 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0111380 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C015A29C (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C015A310 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029A338 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029A768 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 */

struct PFE *__fastcall ppfeGetAMatch(
        struct XDCOBJ *a1,
        struct tagENUMLOGFONTEXDVW *a2,
        const unsigned __int16 *Src,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        struct _POINTL *a7,
        unsigned int *a8,
        int a9)
{
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  struct _FONTHASH **v17; // rdi
  struct PFE *result; // rax
  unsigned int v19; // eax
  struct PFF *v20; // rax
  struct PFF *v21; // rbx
  _QWORD *v22; // rdi
  unsigned int v23; // [rsp+38h] [rbp-C8h]
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[180]; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+124h] [rbp+24h]
  struct PFE *v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+140h] [rbp+40h]
  _DWORD *v30; // [rsp+148h] [rbp+48h]
  _DWORD *v31; // [rsp+150h] [rbp+50h]
  _DWORD *v32; // [rsp+158h] [rbp+58h]
  unsigned int v33; // [rsp+16Ch] [rbp+6Ch]

  MAPPER::MAPPER((MAPPER *)v26, a1, a6, a7, a8, a2, Src, v23, a9, a5);
  v11 = Gre::Base::Globals(v10);
  v13 = *(_QWORD *)(SGDGetSessionState(v12) + 32);
  v14 = *(unsigned int *)(*(_QWORD *)a1 + 252LL);
  if ( (v14 & 4) != 0 )
  {
    v24[0] = *(_QWORD *)(*(_QWORD *)a1 + 256LL);
    if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v26, (struct _UNIVERSAL_FONT_ID *)v24) )
      return v28;
  }
  v15 = *((_QWORD *)v11 + 796);
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 28) )
    {
      v33 &= ~0x80u;
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)v15, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)(v15 + 8), 0) )
      {
        return v28;
      }
    }
  }
  v24[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v14) + 32) + 20280LL);
  v16 = v33;
  if ( (v33 & 0x200) != 0 )
  {
    v33 |= 0x80u;
    v20 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v24, *(_QWORD *)(*(_QWORD *)a1 + 48LL), 0LL);
    v21 = v20;
    if ( v20 )
    {
      v22 = (_QWORD *)((char *)v20 + 112);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)v20 + 14, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, (struct _FONTHASH **)v21 + 13, 0) )
      {
        return v28;
      }
      v16 = v33;
      if ( (v33 & 0x20000000) != 0 )
      {
        result = v28;
        if ( !v28 || *(struct PFF **)v28 != v21 )
        {
          *a6 = 0;
          *a8 = 0;
          a7->y = 1;
          a7->x = 1;
          v24[1] = *v22;
          v24[0] = v22;
          v25 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v24);
        }
        return result;
      }
    }
    else
    {
      v16 = v33;
    }
  }
  v17 = *(struct _FONTHASH ***)(v13 + 20272);
  v33 = v16 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, v17, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, v17 + 1, 1) )
  {
    return v28;
  }
  result = v28;
  if ( !v28 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v26, a6, a8, a7);
    if ( !result )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x20000000) == 0 )
      {
        v19 = v33;
        if ( (v33 & 0x200) == 0 )
        {
LABEL_10:
          if ( (v19 & 0x20000) != 0 )
          {
LABEL_33:
            v33 = v19 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v26);
            return v28;
          }
          MAPPER::bGetFaceName((MAPPER *)v26);
          *v32 = 0;
          v29 = -1;
          v28 = 0LL;
          *v30 = 0;
          *v31 = 1;
          v31[1] = 1;
          v33 &= ~0x80u;
          v27 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, v17, 0)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v26, v17 + 1, 0) )
          {
            return v28;
          }
          result = v28;
          if ( !v28 )
          {
            v19 = v33;
            goto LABEL_33;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v26);
        result = v28;
        if ( v28 )
          return result;
      }
      v19 = v33;
      goto LABEL_10;
    }
  }
  return result;
}
