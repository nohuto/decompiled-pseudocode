/*
 * XREFs of IopMcCreateBufferEntryMdl @ 0x140717768
 * Callers:
 *     IopMcGetBuffer @ 0x140A94B58 (IopMcGetBuffer.c)
 * Callees:
 *     IopUnlockAndFreeMdl @ 0x14025FCC8 (IopUnlockAndFreeMdl.c)
 *     IopMcAddMdlPagesToTable @ 0x1404B7C60 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14059FCD4 (IopMcRemoveMdlPagesFromTable.c)
 *     IopAllocateAndLockMdl @ 0x14070F4DC (IopAllocateAndLockMdl.c)
 */

void __fastcall IopMcCreateBufferEntryMdl(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  KPROCESSOR_MODE v5; // r8
  ULONG v7; // edx
  void *v8; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  PMDL Mdl; // [rsp+40h] [rbp+8h] BYREF

  v4 = dword_140F8C4E0;
  v5 = *(_BYTE *)(BugCheckParameter2 + 44);
  v7 = *(_DWORD *)(BugCheckParameter2 + 40);
  v10 = 0LL;
  v8 = *(void **)(BugCheckParameter2 + 32);
  Mdl = 0LL;
  if ( (int)IopAllocateAndLockMdl(v8, v7, v5, a4, &Mdl, 0LL) >= 0 )
  {
    IopMcAddMdlPagesToTable(BugCheckParameter2, (__int64)Mdl);
    _InterlockedOr(v9, 0);
    if ( v4 == dword_140F8C4E0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 56) = Mdl;
    }
    else
    {
      IopMcRemoveMdlPagesFromTable(BugCheckParameter2, (ULONG_PTR)Mdl);
      IopUnlockAndFreeMdl(Mdl);
    }
  }
}
