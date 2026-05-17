/*
 * XREFs of RtlSplay @ 0x1800C48C0
 * Callers:
 *     RtlpTpIoLookup @ 0x1800C3DFC (RtlpTpIoLookup.c)
 *     RtlEnumerateGenericTable @ 0x1800C4060 (RtlEnumerateGenericTable.c)
 *     RtlDelete @ 0x1800C4270 (RtlDelete.c)
 *     RtlInsertElementGenericTable @ 0x1800C44D0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800C4650 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTableFull @ 0x1800C4770 (RtlLookupElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1800C4840 (RtlLookupElementGenericTable.c)
 *     PfxFindPrefix @ 0x18013A2F0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x18013A3F0 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlSplay(_QWORD *a1)
{
  _QWORD *i; // rax
  _QWORD *v2; // r8
  _QWORD *v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *v6; // r8
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  _QWORD *v9; // r8
  _QWORD *v10; // r8
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // r8
  _QWORD *v16; // r8
  _QWORD *v17; // r8

  for ( i = (_QWORD *)*a1; (_QWORD *)*a1 != a1; i = (_QWORD *)*a1 )
  {
    v2 = (_QWORD *)i[1];
    v3 = (_QWORD *)*i;
    if ( v2 == a1 )
    {
      if ( v3 == i )
      {
        v14 = (_QWORD *)a1[2];
        i[1] = v14;
        if ( v14 )
          *v14 = i;
        a1[2] = i;
        *i = a1;
        *a1 = a1;
      }
      else if ( (_QWORD *)v3[1] == i )
      {
        v6 = (_QWORD *)a1[2];
        i[1] = v6;
        if ( v6 )
          *v6 = i;
        v7 = (_QWORD *)i[2];
        v3[1] = v7;
        if ( v7 )
          *v7 = v3;
        if ( (_QWORD *)*v3 == v3 )
        {
          *a1 = a1;
          a1[2] = i;
          *i = a1;
          i[2] = v3;
          *v3 = i;
        }
        else
        {
          *a1 = *v3;
          v8 = (_QWORD *)(*v3 + 8LL);
          if ( (_QWORD *)*v8 != v3 )
            v8 = (_QWORD *)(*v3 + 16LL);
          *v8 = a1;
          a1[2] = i;
          *i = a1;
          i[2] = v3;
          *v3 = i;
        }
      }
      else
      {
        v11 = (_QWORD *)a1[1];
        v3[2] = v11;
        if ( v11 )
          *v11 = v3;
        v12 = (_QWORD *)a1[2];
        i[1] = v12;
        if ( v12 )
          *v12 = i;
        if ( (_QWORD *)*v3 == v3 )
        {
          *a1 = a1;
          a1[1] = v3;
          *v3 = a1;
          a1[2] = i;
          *i = a1;
        }
        else
        {
          *a1 = *v3;
          v13 = (_QWORD *)(*v3 + 8LL);
          if ( (_QWORD *)*v13 != v3 )
            v13 = (_QWORD *)(*v3 + 16LL);
          *v13 = a1;
          a1[1] = v3;
          *v3 = a1;
          a1[2] = i;
          *i = a1;
        }
      }
    }
    else if ( v3 == i )
    {
      v4 = (_QWORD *)a1[1];
      i[2] = v4;
      if ( v4 )
        *v4 = i;
      a1[1] = i;
      *i = a1;
      *a1 = a1;
    }
    else if ( (_QWORD *)v3[2] == i )
    {
      v3[2] = v2;
      if ( v2 )
        *v2 = v3;
      v9 = (_QWORD *)a1[1];
      i[2] = v9;
      if ( v9 )
        *v9 = i;
      if ( (_QWORD *)*v3 == v3 )
      {
        *a1 = a1;
        a1[1] = i;
        *i = a1;
        i[1] = v3;
        *v3 = i;
      }
      else
      {
        *a1 = *v3;
        v10 = (_QWORD *)(*v3 + 8LL);
        if ( (_QWORD *)*v10 != v3 )
          v10 = (_QWORD *)(*v3 + 16LL);
        *v10 = a1;
        a1[1] = i;
        *i = a1;
        i[1] = v3;
        *v3 = i;
      }
    }
    else
    {
      v15 = (_QWORD *)a1[1];
      i[2] = v15;
      if ( v15 )
        *v15 = i;
      v16 = (_QWORD *)a1[2];
      v3[1] = v16;
      if ( v16 )
        *v16 = v3;
      if ( (_QWORD *)*v3 == v3 )
      {
        *a1 = a1;
        a1[1] = i;
        *i = a1;
        a1[2] = v3;
        *v3 = a1;
      }
      else
      {
        *a1 = *v3;
        v17 = (_QWORD *)(*v3 + 8LL);
        if ( (_QWORD *)*v17 != v3 )
          v17 = (_QWORD *)(*v3 + 16LL);
        *v17 = a1;
        a1[1] = i;
        *i = a1;
        a1[2] = v3;
        *v3 = a1;
      }
    }
  }
  return a1;
}
