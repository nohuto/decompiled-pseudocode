/*
 * XREFs of ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18005B0E8
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800287E4 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800BF6E0 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // edi
  unsigned int v11; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 64) )
    return v2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
    v12 = v6;
    if ( !*(_BYTE *)(v6 + 269) )
      goto LABEL_7;
    v7 = *(_DWORD *)(a2 + 24);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
      break;
    v9 = 0;
    if ( v8 <= *(_DWORD *)(a2 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 24)) = v6;
      *(_DWORD *)(a2 + 24) = v8;
    }
    else
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8, 1, &v12);
      v2 = v9;
      if ( v9 < 0 )
      {
        v11 = 192;
        goto LABEL_12;
      }
    }
    v2 = v9;
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
      return v2;
  }
  v2 = -2147024362;
  v11 = 181;
  v9 = -2147024362;
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v11, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x137u, 0LL);
  return v2;
}
