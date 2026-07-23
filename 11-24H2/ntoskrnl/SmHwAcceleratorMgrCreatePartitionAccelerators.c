/*
 * XREFs of SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14079C59C
 * Callers:
 *     SmHwAcceleratorMgrPartitionRegister @ 0x14079C71C (SmHwAcceleratorMgrPartitionRegister.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmHwAcceleratorPartitionMgrInsertAccelerator @ 0x14060DEF4 (SmHwAcceleratorPartitionMgrInsertAccelerator.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14079C9E8 (SmHwAcceleratorParitionCtxCreate.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14079CC18 (SmHwAcceleratorPartitionCtxCleanup.c)
 */

__int64 __fastcall SmHwAcceleratorMgrCreatePartitionAccelerators(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 *v5; // r14
  __int64 **v6; // r8
  __int64 *j; // rdx
  int k; // esi
  int v9; // edi
  PPRIVILEGE_SET *v10; // rcx
  PPRIVILEGE_SET v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v17; // [rsp+28h] [rbp-8h]
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp+40h] BYREF

  Privileges = 0LL;
  v17 = (__int64 **)&v16;
  v16 = (__int64)&v16;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= (unsigned __int16)KeNumberNodes )
    {
      while ( 1 )
      {
        v12 = v16;
        if ( (__int64 *)v16 == &v16 )
        {
          v9 = 0;
          goto LABEL_21;
        }
        if ( *(__int64 **)(v16 + 8) != &v16 )
          break;
        v13 = *(_QWORD *)v16;
        if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
          break;
        v16 = *(_QWORD *)v16;
        *(_QWORD *)(v13 + 8) = &v16;
        Privileges = (PPRIVILEGE_SET)v12;
        SmHwAcceleratorPartitionMgrInsertAccelerator(a2, v12);
      }
LABEL_26:
      __fastfail(3u);
    }
    if ( *(_DWORD *)(a1 + 4 * i + 1048) )
      break;
LABEL_15:
    ;
  }
  v5 = 0LL;
  v6 = (__int64 **)(16LL * (unsigned int)i + a1 + 24);
  for ( j = *v6; j != (__int64 *)v6; j = (__int64 *)*j )
  {
    if ( !v5 || *((_DWORD *)j + 17) < *((_DWORD *)v5 + 17) )
      v5 = j;
  }
  for ( k = 0; ; ++k )
  {
    if ( k >= 2 )
      goto LABEL_15;
    v9 = SmHwAcceleratorParitionCtxCreate(&Privileges, v5, (unsigned int)k);
    if ( v9 < 0 )
      break;
    v10 = (PPRIVILEGE_SET *)v17;
    v11 = Privileges;
    if ( *v17 != &v16 )
      goto LABEL_26;
    Privileges->Privilege[0].Luid = (LUID)v17;
    *(_QWORD *)&v11->PrivilegeCount = &v16;
    *v10 = v11;
    Privileges = 0LL;
    v17 = (__int64 **)v11;
  }
  while ( 1 )
  {
    v12 = v16;
LABEL_21:
    if ( (__int64 *)v12 == &v16 )
      return (unsigned int)v9;
    if ( *(__int64 **)(v12 + 8) != &v16 )
      goto LABEL_26;
    v14 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_26;
    v16 = *(_QWORD *)v12;
    *(_QWORD *)(v14 + 8) = &v16;
    Privileges = (PPRIVILEGE_SET)v12;
    SmHwAcceleratorPartitionCtxCleanup(v12);
    CmSiFreeMemory(Privileges);
  }
}
