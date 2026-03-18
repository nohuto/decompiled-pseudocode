/*
 * XREFs of ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1401D1AFC
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator==(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    return v2 == *(_QWORD *)(a2 + 16);
  else
    return **(_QWORD **)a1 == **(_QWORD **)a2;
}
