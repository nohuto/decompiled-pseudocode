/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x140B6AFFC
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14045B61C (IoGetLowerDeviceObjectWithTag.c)
 *     PnpLockDeviceActionQueue @ 0x1404937D8 (PnpLockDeviceActionQueue.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140A78B64 (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140AB2D44 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     IopCaptureObjectName @ 0x140B6B690 (IopCaptureObjectName.c)
 *     IopCheckDeviceFlags @ 0x140B6B740 (IopCheckDeviceFlags.c)
 *     IopIsNotifyInBroadcast @ 0x140B6B7BC (IopIsNotifyInBroadcast.c)
 *     IopFreePoDeviceNotifyListHead @ 0x140B6B7F0 (IopFreePoDeviceNotifyListHead.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1, int a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  char *v7; // rbx
  char *i; // rax
  char *j; // rax
  __int64 ***v10; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  PVOID *v16; // rcx
  _QWORD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rdx
  __int64 *v21; // rax
  __int64 *k; // rcx
  __int64 *v23; // rcx
  _QWORD *v24; // rdx
  char v25; // r10
  _QWORD *m; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *n; // rax
  _QWORD *v33; // rdi
  _QWORD *v34; // rax
  _QWORD *jj; // rax
  _QWORD *ii; // rax
  __int64 v37; // r9
  char v38; // dl
  _QWORD *v39; // r9
  char v40; // al
  _DWORD *v41; // rsi
  _DWORD *LowerDeviceObjectWithTag; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  char v45; // r10
  _QWORD *kk; // rax
  _QWORD *v47; // rax
  _BYTE *v48; // rcx
  unsigned __int8 v49; // dl
  _QWORD *mm; // rcx
  _QWORD *nn; // rcx
  _QWORD *v52; // rcx
  _QWORD *i1; // rax
  __int64 v54; // r8
  unsigned __int8 v55; // r9
  _QWORD *i4; // rax
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 v59; // rdi
  char *v60; // rdx
  __int64 v61; // rbx
  __int64 i2; // r11
  __int64 v63; // rbx
  __int64 i3; // r11
  char *v65; // rax
  char **v66; // rcx
  __int64 *v67; // r11
  __int64 *result; // rax
  NTSTATUS v69; // ebx
  __int64 *v70; // rax
  __int64 *v71; // r11
  __int64 *v72; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v73; // [rsp+28h] [rbp-18h]
  __int64 v74; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v75; // [rsp+38h] [rbp-8h]

  v73 = &v72;
  v72 = (__int64 *)&v72;
  v75 = &v74;
  v74 = (__int64)&v74;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      v69 = PnpPowerStateTransitionWatchdogPushRecord();
      PnpLockDeviceActionQueue();
      if ( v69 >= 0 )
        PnpPowerStateTransitionWatchdogPopRecord();
    }
    else
    {
      PnpLockDeviceActionQueue();
    }
  }
  memset_0(a1, 0, 0x180uLL);
  v4 = a1 + 48;
  *((_DWORD *)a1 + 94) = a2;
  v5 = 5LL;
  do
  {
    *(v4 - 2) = v4 - 3;
    *(v4 - 3) = v4 - 3;
    *v4 = v4 - 1;
    *(v4 - 1) = v4 - 1;
    v4[2] = v4 + 1;
    v4[1] = v4 + 1;
    v6 = v4 + 3;
    v4[4] = v4 + 3;
    v4 += 9;
    *v6 = v6;
    --v5;
  }
  while ( v5 );
  v7 = (char *)IopRootDeviceNode;
  for ( i = (char *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (char *)*((_QWORD *)i + 1) )
    v7 = i;
  while ( v7 != IopRootDeviceNode )
  {
    v10 = (__int64 ***)(v7 + 160);
    *((_DWORD *)v7 + 62) = 0;
    *((_DWORD *)v7 + 63) = 0;
    *((_DWORD *)v7 + 64) = 0;
    *((_DWORD *)v7 + 65) = 0;
    v7[216] = 0;
    *((_QWORD *)v7 + 28) = *((_QWORD *)v7 + 4);
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)v7 + 4));
    *((_QWORD *)v7 + 26) = AttachedDeviceReference;
    v12 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v13 = *((_QWORD *)v7 + 26);
    *((_QWORD *)v7 + 30) = v12;
    v14 = IopCaptureObjectName(v13);
    v15 = (void *)*((_QWORD *)v7 + 28);
    *((_QWORD *)v7 + 29) = v14;
    PsReferenceSiloContext(v15);
    v7[216] = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v7 + 160, 0x2000LL) )
      v7[216] |= 2u;
    v16 = (PVOID *)(v7 + 16);
    if ( *((PVOID *)v7 + 2) == IopRootDeviceNode && *((_DWORD *)v7 + 112) && (*((_DWORD *)v7 + 99) & 4) == 0 )
    {
      v17 = v73;
      if ( *v73 != (__int64 *)&v72 )
LABEL_19:
        __fastfail(3u);
      *((_QWORD *)v7 + 21) = v73;
      *v10 = &v72;
      *v17 = v10;
      v73 = (__int64 **)(v7 + 160);
    }
    v7 = *(char **)v7;
    if ( v7 )
    {
      for ( j = (char *)*((_QWORD *)v7 + 1); j; j = (char *)*((_QWORD *)j + 1) )
        v7 = j;
    }
    else
    {
      v7 = (char *)*v16;
    }
  }
  while ( 1 )
  {
    v18 = v72;
    if ( v72 == (__int64 *)&v72 )
      break;
    if ( (__int64 **)v72[1] != &v72 )
      goto LABEL_19;
    v19 = (__int64 *)*v72;
    if ( *(__int64 **)(*v72 + 8) != v72 )
      goto LABEL_19;
    v72 = (__int64 *)*v72;
    v19[1] = (__int64)&v72;
    v20 = v18 - 20;
    *((_BYTE *)v18 + 56) |= 1u;
    v21 = v20;
    for ( k = (__int64 *)v20[1]; k; k = (__int64 *)k[1] )
      v21 = k;
    while ( v21 != v20 )
    {
      *((_BYTE *)v21 + 216) |= 1u;
      v23 = (__int64 *)*v21;
      if ( *v21 )
      {
        do
        {
          v21 = v23;
          v23 = (__int64 *)v23[1];
        }
        while ( v23 );
      }
      else
      {
        v21 = (__int64 *)v21[2];
      }
    }
  }
  do
  {
    v24 = IopRootDeviceNode;
    v25 = 0;
    for ( m = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); m; m = (_QWORD *)m[1] )
      v24 = m;
    while ( 1 )
    {
      v28 = IopRootDeviceNode;
      if ( v24 == IopRootDeviceNode )
        break;
      if ( (v24[27] & 2) != 0 )
      {
        v29 = (_QWORD *)v24[1];
        v30 = v24;
        while ( v29 )
        {
          v30 = v29;
          v29 = (_QWORD *)v29[1];
        }
        while ( v30 != v24 )
        {
          *((_BYTE *)v30 + 216) |= 2u;
          v31 = (_QWORD *)*v30;
          if ( *v30 )
          {
            do
            {
              v30 = v31;
              v31 = (_QWORD *)v31[1];
            }
            while ( v31 );
          }
          else
          {
            v30 = (_QWORD *)v30[2];
          }
        }
      }
      v27 = (_QWORD *)*v24;
      if ( *v24 )
      {
        do
        {
          v24 = v27;
          v27 = (_QWORD *)v27[1];
        }
        while ( v27 );
      }
      else
      {
        v24 = (_QWORD *)v24[2];
      }
    }
    for ( n = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); n; n = (_QWORD *)n[1] )
      v28 = n;
    v33 = IopRootDeviceNode;
    if ( v28 == IopRootDeviceNode )
      break;
    do
    {
      if ( (v28[27] & 2) != 0 )
      {
        for ( ii = (_QWORD *)v28[22]; ii != v28 + 22; ii = (_QWORD *)*ii )
        {
          v37 = *(ii - 1);
          v38 = *(_BYTE *)(v37 + 56);
          if ( (v38 & 2) == 0 )
          {
            v25 = 1;
            *(_BYTE *)(v37 + 56) = v38 | 2;
          }
        }
      }
      v34 = (_QWORD *)*v28;
      if ( *v28 )
      {
        do
        {
          v28 = v34;
          v34 = (_QWORD *)v34[1];
        }
        while ( v34 );
      }
      else
      {
        v28 = (_QWORD *)v28[2];
      }
      v33 = IopRootDeviceNode;
    }
    while ( v28 != IopRootDeviceNode );
  }
  while ( v25 );
  for ( jj = (_QWORD *)v33[1]; jj; jj = (_QWORD *)jj[1] )
    v33 = jj;
  while ( 1 )
  {
    v39 = IopRootDeviceNode;
    if ( v33 == IopRootDeviceNode )
      break;
    v40 = *((_BYTE *)v33 + 216);
    if ( (v40 & 2) != 0 )
    {
      v41 = (_DWORD *)v33[26];
      *((_BYTE *)v33 + 216) = v40 + 1;
      ObfReferenceObjectWithTag(v41, 0x70506F50u);
      while ( v41 )
      {
        if ( v41[18] == 7 )
        {
          ObfDereferenceObjectWithTag(v41, 0x70506F50u);
          if ( (unsigned __int8)IopCheckDeviceFlags(v33 + 20, 256LL) )
            *((_BYTE *)v33 + 216) = 2;
          break;
        }
        LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v41, 0x70506F50u);
        ObfDereferenceObjectWithTag(v41, 0x70506F50u);
        v41 = LowerDeviceObjectWithTag;
      }
    }
    v43 = (_QWORD *)*v33;
    if ( *v33 )
    {
      do
      {
        v33 = v43;
        v43 = (_QWORD *)v43[1];
      }
      while ( v43 );
    }
    else
    {
      v33 = (_QWORD *)v33[2];
    }
  }
  do
  {
    v44 = (_QWORD *)v39[1];
    v45 = 0;
    while ( v44 )
    {
      v39 = v44;
      v44 = (_QWORD *)v44[1];
    }
    while ( 1 )
    {
      v47 = IopRootDeviceNode;
      if ( v39 == IopRootDeviceNode )
        break;
      v48 = (_BYTE *)v39[2];
      if ( v48 != IopRootDeviceNode )
      {
        v49 = *((_BYTE *)v39 + 216);
        if ( v48[216] > v49 )
        {
          v48[216] = v49;
          v48 = (_BYTE *)v39[2];
        }
      }
      v39 = (_QWORD *)*v39;
      if ( v39 )
      {
        for ( kk = (_QWORD *)v39[1]; kk; kk = (_QWORD *)kk[1] )
          v39 = kk;
      }
      else
      {
        v39 = v48;
      }
    }
    for ( mm = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); mm; mm = (_QWORD *)mm[1] )
      v47 = mm;
    v39 = IopRootDeviceNode;
    if ( v47 == IopRootDeviceNode )
      break;
    do
    {
      for ( nn = (_QWORD *)v47[24]; nn != v47 + 24; nn = (_QWORD *)*nn )
      {
        v54 = nn[5];
        v55 = *((_BYTE *)v47 + 216);
        if ( *(_BYTE *)(v54 + 56) > v55 )
        {
          v45 = 1;
          *(_BYTE *)(v54 + 56) = v55;
        }
      }
      v52 = (_QWORD *)*v47;
      if ( *v47 )
      {
        do
        {
          v47 = v52;
          v52 = (_QWORD *)v52[1];
        }
        while ( v52 );
      }
      else
      {
        v47 = (_QWORD *)v47[2];
      }
      v39 = IopRootDeviceNode;
    }
    while ( v47 != IopRootDeviceNode );
  }
  while ( v45 );
  for ( i1 = (_QWORD *)v39[1]; i1; i1 = (_QWORD *)i1[1] )
    v39 = i1;
  while ( v39 != IopRootDeviceNode )
  {
    if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), v39 + 20) )
    {
      v59 = v57 + 16;
      ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v58 + 56) + 16];
      v60 = *(char **)(v57 + 16);
      if ( v60 != IopRootDeviceNode && (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), v60 + 160) )
      {
        ++*(_DWORD *)(v58 + 96);
        ++*(_DWORD *)(*(_QWORD *)v59 + 248LL);
      }
      v61 = v58 + 32;
      for ( i2 = *(_QWORD *)(v58 + 32); i2 != v61; i2 = *v71 )
      {
        if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), *(_QWORD *)(i2 + 40)) )
          ++*(_DWORD *)(v58 + 96);
      }
      v63 = v58 + 16;
      for ( i3 = *(_QWORD *)(v58 + 16); i3 != v63; i3 = *v67 )
      {
        if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), *(_QWORD *)(i3 - 8)) )
          ++*(_DWORD *)(v58 + 88);
      }
      v65 = &a1[64 * *(unsigned __int8 *)(v58 + 56) + 24 + 8 * *(unsigned __int8 *)(v58 + 56)];
      v66 = (char **)*((_QWORD *)v65 + 1);
      if ( *v66 != v65 )
        goto LABEL_19;
      *(_QWORD *)v58 = v65;
      *(_QWORD *)(v58 + 8) = v66;
      *v66 = (char *)v58;
      *((_QWORD *)v65 + 1) = v58;
    }
    else
    {
      v70 = v75;
      if ( (__int64 *)*v75 != &v74 )
        goto LABEL_19;
      *(_QWORD *)(v58 + 8) = v75;
      *(_QWORD *)v58 = &v74;
      v59 = v57 + 16;
      *v70 = v58;
      v75 = (__int64 *)v58;
    }
    v39 = *(_QWORD **)v57;
    if ( v39 )
    {
      for ( i4 = (_QWORD *)v39[1]; i4; i4 = (_QWORD *)i4[1] )
        v39 = i4;
    }
    else
    {
      v39 = *(_QWORD **)v59;
    }
  }
  IopFreePoDeviceNotifyListHead(&v74);
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
