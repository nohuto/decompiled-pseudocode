/*
 * XREFs of KiUpdateSavedSupervisorState @ 0x140B593B0
 * Callers:
 *     KiStartSavingSupervisorState @ 0x140B59310 (KiStartSavingSupervisorState.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 KiUpdateSavedSupervisorState()
{
  unsigned int v0; // r14d
  unsigned __int64 v1; // rax
  unsigned int v2; // ebx
  PVOID *Pool2; // rdi
  unsigned int v4; // esi
  unsigned int v5; // r12d
  __int64 v6; // rbp
  void *v7; // rax
  PVOID *v8; // rsi
  __int128 Context; // [rsp+20h] [rbp-28h] BYREF

  v0 = KeNumberProcessors_0;
  Context = 0LL;
  v1 = 8LL * (unsigned int)KeNumberProcessors_0;
  if ( v1 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v2 = 0;
  Pool2 = (PVOID *)ExAllocatePool2(0x40uLL, (unsigned int)v1, 0x65687358u);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v4 = 0;
  v5 = MEMORY[0xFFFFF78000000600] - MEMORY[0xFFFFF780000003E8] + KiIptSaveAreaLength + 127;
  while ( 1 )
  {
    if ( v4 >= v0 )
    {
      *(_QWORD *)&Context = Pool2;
      DWORD2(Context) = v0;
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiIpiUpdateExtendedSupervisorState, (ULONG_PTR)&Context);
      goto LABEL_18;
    }
    v6 = v4;
    if ( *(_QWORD *)(KiProcessorBlock[v4] + 1728) )
    {
      Pool2[v4] = 0LL;
      goto LABEL_10;
    }
    v7 = (void *)ExAllocatePool2(0x40uLL, v5, 0x65707553u);
    Pool2[v4] = v7;
    if ( !v7 )
      break;
    memset_0(v7, 0, v5);
LABEL_10:
    ++v4;
  }
  if ( v4 )
  {
    v8 = Pool2;
    do
    {
      if ( *v8 )
        ExFreePoolWithTag(*v8, 0);
      ++v8;
      --v6;
    }
    while ( v6 );
  }
  v2 = -1073741670;
LABEL_18:
  ExFreePoolWithTag(Pool2, 0);
  return v2;
}
