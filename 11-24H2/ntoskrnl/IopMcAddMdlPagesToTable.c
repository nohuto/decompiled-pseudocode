/*
 * XREFs of IopMcAddMdlPagesToTable @ 0x1404B7C60
 * Callers:
 *     IopMcCreateBufferEntryMdl @ 0x140717768 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     IopMcShouldYield @ 0x1404B7DE8 (IopMcShouldYield.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall IopMcAddMdlPagesToTable(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rdi
  ULONG_PTR v4; // rax
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rdx
  KIRQL v9; // bp
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // r10
  bool v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF

  v3 = ((*(_DWORD *)(a2 + 44) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a2 + 40) + 4095) >> 12;
  if ( FeaturePfnArrayDebug )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v4 )
      KeBugCheckEx(0x1F4u, 7uLL, BugCheckParameter2, 0LL, v4);
  }
  *(_QWORD *)(BugCheckParameter2 + 88) = a2 + 48;
  v5 = 0;
  if ( (_DWORD)v3 )
  {
    v6 = (_DWORD *)(BugCheckParameter2 + 120);
    do
    {
      *v6 = v5++;
      v6 += 8;
    }
    while ( v5 < (unsigned int)v3 );
  }
  v19 = 0;
  v7 = 0;
  v9 = ExAcquireSpinLockExclusive(&dword_140F8C4E4);
  if ( !(_DWORD)v3 )
    goto LABEL_24;
  v10 = BugCheckParameter2 + 96;
  do
  {
    LOBYTE(v8) = v9;
    if ( (unsigned __int8)IopMcShouldYield(v7, v8) )
    {
      ExReleaseSpinLockExclusive(&dword_140F8C4E4, v9);
      KeYieldProcessorEx(&v19);
      v9 = ExAcquireSpinLockExclusive(&dword_140F8C4E4);
    }
    v11 = qword_140F8C4E8;
    v12 = 0;
    if ( !qword_140F8C4E8 )
      goto LABEL_22;
    v13 = *(unsigned int *)(v10 + 24);
    v14 = v10 - (unsigned int)(32 * (v13 + 3));
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 88) + 8 * v13);
    while ( 1 )
    {
      v8 = *(unsigned int *)(v11 + 24);
      v16 = v11 - (unsigned int)(32 * (v8 + 3));
      v17 = *(_QWORD *)(v16 + 88);
      if ( v15 < *(_QWORD *)(v17 + 8 * v8) )
        break;
      if ( v15 <= *(_QWORD *)(v17 + 8 * v8) )
      {
        if ( v14 < v16 )
          break;
        if ( v14 <= v16 )
          goto LABEL_23;
      }
      v18 = *(_QWORD *)(v11 + 8);
      if ( !v18 )
      {
        v12 = 1;
        goto LABEL_22;
      }
LABEL_20:
      v11 = v18;
    }
    v18 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
      goto LABEL_20;
    v12 = 0;
LABEL_22:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140F8C4E8, v11, v12, (_QWORD *)v10);
LABEL_23:
    ++v7;
    v10 += 32LL;
  }
  while ( v7 < (unsigned int)v3 );
LABEL_24:
  ExReleaseSpinLockExclusive(&dword_140F8C4E4, v9);
}
