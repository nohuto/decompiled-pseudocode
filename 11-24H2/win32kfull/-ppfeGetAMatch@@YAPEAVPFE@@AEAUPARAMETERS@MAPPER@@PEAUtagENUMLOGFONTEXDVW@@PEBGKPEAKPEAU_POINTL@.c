/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B96C8
 * Callers:
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 * Callees:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1400B7A9C (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ??0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z @ 0x1400B99D4 (--0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400B9F80 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400BA3EC (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400BA59C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400FB420 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1400FBD40 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1401D4D9C (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140311B7C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct PFE *__fastcall ppfeGetAMatch(
        struct MAPPER::PARAMETERS *a1,
        struct tagENUMLOGFONTEXDVW *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5,
        struct _POINTL *a6,
        unsigned int *a7)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned int v16; // eax
  struct _FONTHASH **v17; // rdi
  struct PFE *result; // rax
  unsigned int v19; // eax
  HDEV v20; // rdx
  struct PFF *v21; // rax
  int v22; // r8d
  struct PFF *v23; // rbx
  _QWORD *v24; // rdi
  unsigned int v25; // [rsp+38h] [rbp-C8h]
  _QWORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+50h] [rbp-B0h]
  _BYTE v28[180]; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+114h] [rbp+14h]
  struct PFE *v30; // [rsp+128h] [rbp+28h]
  int v31; // [rsp+130h] [rbp+30h]
  _DWORD *v32; // [rsp+138h] [rbp+38h]
  _DWORD *v33; // [rsp+140h] [rbp+40h]
  _DWORD *v34; // [rsp+148h] [rbp+48h]
  unsigned int v35; // [rsp+154h] [rbp+54h]

  MAPPER::MAPPER((MAPPER *)v28, a1, a5, a6, a7, a2, a3, v25);
  v11 = *(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96);
  if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v28) )
    return v30;
  v15 = *(_QWORD *)(v11 + 20408);
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 28) )
    {
      v35 &= ~0x80u;
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, (struct _FONTHASH **)v15, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, (struct _FONTHASH **)(v15 + 8), 0) )
      {
        return v30;
      }
    }
  }
  v26[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 20424LL);
  v16 = v35;
  if ( (v35 & 0x200) != 0 )
  {
    v20 = *(HDEV *)a1;
    v35 |= 0x80u;
    v21 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v26, v20, 0LL);
    v23 = v21;
    if ( v21 )
    {
      v24 = (_QWORD *)((char *)v21 + 120);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, (struct _FONTHASH **)v21 + 15, v22)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, (struct _FONTHASH **)v23 + 14, 0) )
      {
        return v30;
      }
      v16 = v35;
      if ( (v35 & 0x20000000) != 0 )
      {
        result = v30;
        if ( !v30 || *(struct PFF **)v30 != v23 )
        {
          *a5 = 0;
          *a7 = 0;
          a6->y = 1;
          a6->x = 1;
          v26[1] = *v24;
          v26[0] = v24;
          v27 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v26);
        }
        return result;
      }
    }
    else
    {
      v16 = v35;
    }
  }
  v17 = *(struct _FONTHASH ***)(v11 + 20416);
  v35 = v16 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, v17, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, v17 + 1, 1) )
  {
    return v30;
  }
  result = v30;
  if ( !v30 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v28, a5, a7, a6);
    if ( !result )
    {
      if ( !*((_BYTE *)a1 + 69) )
      {
        v19 = v35;
        if ( (v35 & 0x200) == 0 )
        {
LABEL_15:
          if ( (v19 & 0x20000) != 0 )
          {
LABEL_20:
            v35 = v19 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v28);
            return v30;
          }
          MAPPER::bGetFaceName((MAPPER *)v28);
          *v34 = 0;
          v31 = -1;
          v30 = 0LL;
          *v32 = 0;
          *v33 = 1;
          v33[1] = 1;
          v35 &= ~0x80u;
          v29 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, v17, 0)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v28, v17 + 1, 0) )
          {
            return v30;
          }
          result = v30;
          if ( !v30 )
          {
            v19 = v35;
            goto LABEL_20;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v28);
        result = v30;
        if ( v30 )
          return result;
      }
      v19 = v35;
      goto LABEL_15;
    }
  }
  return result;
}
