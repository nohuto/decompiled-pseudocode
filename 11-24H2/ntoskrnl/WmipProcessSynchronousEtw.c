/*
 * XREFs of WmipProcessSynchronousEtw @ 0x140AB07F0
 * Callers:
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipLegacyEtwWorker @ 0x140A876B0 (WmipLegacyEtwWorker.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall WmipProcessSynchronousEtw(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
LABEL_15:
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    WmipLegacyEtwWorker(v2[2]);
    v4 = v2 + 5;
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      if ( (_QWORD *)*v4 == v4 )
        break;
      if ( (_QWORD *)v5[1] != v4 )
        goto LABEL_15;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
        goto LABEL_15;
      *v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      KeSetEvent((PRKEVENT)(v5 + 2), 0, 0);
    }
    ExFreePoolWithTag(v2, 0x70696D57u);
  }
  v7 = a1 + 2;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 )
      goto LABEL_15;
    v9 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_15;
    *v7 = v9;
    v9[1] = v7;
    KeWaitForSingleObject(v8 + 4, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(v8, 0x70696D57u);
  }
}
