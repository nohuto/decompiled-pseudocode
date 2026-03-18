/*
 * XREFs of MenuRecalc @ 0x140216248
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1402900A4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall MenuRecalc(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 i; // rcx
  _BYTE *v13; // rbx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v18, a2);
  v4 = *(__int64 **)(W32GetUserSessionState(v3, v2) + 19888);
  v7 = 0;
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19944);
  W32GetUserSessionState(v10, v9);
  v13 = (_BYTE *)(v8 + 24);
  do
  {
    if ( *v13 == 2 )
    {
      v14 = *v4;
      v18[2] = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v18, v14);
      v15 = 0;
      *(_DWORD *)(*(_QWORD *)v18[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v18[0] + 68LL) = 0;
      for ( i = *(_QWORD *)v18[0]; v15 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 40LL) + 44LL); i = *(_QWORD *)v18[0] )
      {
        v16 = (int)v15++;
        v11 = 96 * v16;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 88LL) + v11) + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 88LL) + v11) + 88LL) = 0;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18[0] + 88LL) + v11) + 104LL) = -1;
      }
    }
    ++v7;
    v13 += 32;
    v4 += 5;
  }
  while ( v7 <= *(_DWORD *)(W32GetUserSessionState(i, v11) + 19872) );
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v18, v11);
}
