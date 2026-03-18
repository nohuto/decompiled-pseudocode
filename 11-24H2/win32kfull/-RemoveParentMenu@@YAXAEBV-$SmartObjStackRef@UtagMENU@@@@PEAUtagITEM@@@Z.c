/*
 * XREFs of ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1401C3714
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1400726F0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveParentMenu(__int64 **a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *i; // rdx
  __int64 *v5; // rax
  _QWORD *v6; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    for ( i = (_QWORD *)(v2 + 104); *i; i = (_QWORD *)*i )
    {
      v5 = a1[2];
      if ( !v5 )
        v5 = (__int64 *)**a1;
      v6 = (_QWORD *)*i;
      if ( *(__int64 **)(*i + 8LL) == v5 )
      {
        *i = *v6;
        Win32FreePool(v6);
        return;
      }
    }
  }
}
