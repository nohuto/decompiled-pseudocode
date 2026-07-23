/*
 * XREFs of PiValidatePowerRelations @ 0x140A88FC4
 * Callers:
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404A97B0 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404AEBE4 (PnpReleasePowerRelationsQueueLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall PiValidatePowerRelations(__int64 a1)
{
  __int64 ****v2; // rdx
  __int64 ***v3; // rax
  __int64 **v4; // rcx
  _QWORD *v5; // rcx
  __int64 *i; // rcx
  __int64 v7; // r9
  __int64 ****v8; // rdx
  __int64 ***v9; // rax
  __int64 **v10; // r8
  _QWORD *v11; // r8
  __int64 j; // rax
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 **v16; // rdx
  __int64 *v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v18; // [rsp+38h] [rbp-8h]

  PnpAcquirePowerRelationsQueueLock();
  v18 = &v17;
  v2 = (__int64 ****)(a1 + 192);
  v17 = (__int64 *)&v17;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (__int64 ***)v2 )
      break;
    if ( v3[1] != (__int64 **)v2
      || (v4 = *v3, (*v3)[1] != (__int64 *)v3)
      || (*v2 = (__int64 ***)v4, v4[1] = (__int64 *)v2, v5 = v18, *v18 != (__int64 *)&v17) )
    {
LABEL_26:
      __fastfail(3u);
    }
    v3[1] = v18;
    *v3 = &v17;
    *v5 = v3;
    v18 = (__int64 **)v3;
  }
  for ( i = v17; i != (__int64 *)&v17; i = (__int64 *)*i )
  {
    v7 = i[5];
    v8 = (__int64 ****)(v7 + 32);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == (__int64 ***)v8 )
        break;
      if ( v9[1] != (__int64 **)v8 )
        goto LABEL_26;
      v10 = *v9;
      if ( (*v9)[1] != (__int64 *)v9 )
        goto LABEL_26;
      *v8 = (__int64 ***)v10;
      v10[1] = (__int64 *)v8;
      v11 = v18;
      if ( *v18 != (__int64 *)&v17 )
        goto LABEL_26;
      v9[1] = v18;
      *v9 = &v17;
      *v11 = v9;
      v18 = (__int64 **)v9;
    }
    for ( j = v7 - 160; j; j = *(_QWORD *)(j + 16) )
    {
      if ( j == a1 )
        KeBugCheckEx(0xCAu, 0xCuLL, *(_QWORD *)(a1 + 32), *(_QWORD *)(v7 - 128), 0LL);
    }
  }
  while ( 1 )
  {
    v13 = v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    if ( (__int64 **)v17[1] != &v17 )
      goto LABEL_26;
    v14 = (__int64 *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      goto LABEL_26;
    v17 = (__int64 *)*v17;
    v14[1] = (__int64)&v17;
    v15 = v13[2] + 32;
    v16 = *(__int64 ***)(v13[2] + 40);
    if ( *v16 != (__int64 *)v15 )
      goto LABEL_26;
    *v13 = v15;
    v13[1] = (__int64)v16;
    *v16 = v13;
    *(_QWORD *)(v15 + 8) = v13;
  }
  PnpReleasePowerRelationsQueueLock();
}
