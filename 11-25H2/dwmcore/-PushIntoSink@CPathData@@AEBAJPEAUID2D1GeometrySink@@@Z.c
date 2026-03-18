/*
 * XREFs of ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801A84B8
 * Callers:
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801A8190 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::PushIntoSink(CPathData *this, struct ID2D1GeometrySink *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r15
  unsigned int v5; // r14d
  __int64 v6; // rax
  void (__fastcall *v7)(struct ID2D1GeometrySink *, __int128 *); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  void (__fastcall *v11)(struct ID2D1GeometrySink *, __int128 *); // rax
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  BOOL v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+18h]

  v2 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = 0;
  while ( v2 != v4 )
  {
    if ( *(char *)(v2 + 1) < 0 )
    {
      v10 = *(unsigned __int8 *)(v2 + 1);
      LODWORD(v10) = v10 & 0xFFFFFF7F;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v10);
    }
    if ( *(_BYTE *)v2 )
    {
      switch ( *(_BYTE *)v2 )
      {
        case 1:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, bool))(*(_QWORD *)a2 + 64LL))(a2, *(_BYTE *)(v2 + 2) != 0);
          break;
        case 2:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, *(_QWORD *)(v2 + 8));
          break;
        case 3:
          v15 = *(_BYTE *)(v2 + 2) != 0;
          v16 = *(_BYTE *)(v2 + 3) != 0;
          v7 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 112LL);
LABEL_12:
          v13 = *(_OWORD *)(v2 + 8);
          v14 = *(_DWORD *)(v2 + 24);
          v7(a2, &v13);
          break;
        case 4:
          v11 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 96LL);
          v17 = *(_OWORD *)(v2 + 8);
          v11(a2, &v17);
          break;
        case 5:
          v6 = *(_QWORD *)a2;
          v15 = *(_DWORD *)(v2 + 28);
          v7 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v6 + 88);
          goto LABEL_12;
        default:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1CCu, 0LL);
          return v5;
      }
    }
    else
    {
      if ( *(char *)(v2 + 2) < 0 )
      {
        v9 = *(unsigned __int8 *)(v2 + 2);
        LODWORD(v9) = v9 & 0xFFFFFF7F;
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v9);
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, bool))(*(_QWORD *)a2 + 40LL))(
        a2,
        *(_QWORD *)(v2 + 8),
        *(_BYTE *)(v2 + 3) != 0);
    }
    switch ( *(_BYTE *)v2 )
    {
      case 0:
        goto LABEL_21;
      case 1:
        v8 = 8LL;
        break;
      case 2:
LABEL_21:
        v8 = 16LL;
        break;
      case 3:
        v8 = 28LL;
        break;
      case 4:
        v8 = 24LL;
        break;
      case 5:
        v8 = 32LL;
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
    v2 += v8;
  }
  return v5;
}
