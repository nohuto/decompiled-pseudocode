/*
 * XREFs of IopFreeIrpExtension @ 0x140252920
 * Callers:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IoCleanupIrp @ 0x140252A50 (IoCleanupIrp.c)
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     IoReuseIrp @ 0x140359950 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x140454490 (IoSetActivityIdIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x140484034 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopPerfCompleteRequest @ 0x14049CE74 (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140593D00 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140593D50 (IoClearFsTrackOffsetState.c)
 * Callees:
 *     IopFreeCopyObjectsFromIrp @ 0x1402D3208 (IopFreeCopyObjectsFromIrp.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 (__fastcall *__fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3))(_QWORD, _QWORD, _QWORD)
{
  char v3; // al
  __int64 v4; // rbx
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD); // rbp
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v8 = 0LL;
  if ( v3 < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
  else if ( v4 )
  {
    if ( (a2 == 5 || a2 == -1) && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 0x20) != 0 )
      *(_QWORD *)(v4 + 40) = 0LL;
    if ( a2 != 9 && a2 != -1 )
      goto LABEL_18;
    v10 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v10 && _bittest16((const signed __int16 *)(v10 + 2), 9u) )
    {
      v12 = *(_DWORD *)(a1 + 16);
      if ( (v12 & 0x200) != 0 )
      {
        IopFreeCopyObjectsFromIrp();
        *(_BYTE *)(a1 + 65) = 1;
      }
      else if ( (v12 & 0x100) != 0 )
      {
        v8 = IopCopyCompleteReadIrp;
      }
    }
    if ( a2 == -1 )
    {
      *(_WORD *)(v4 + 2) = 0;
    }
    else
    {
LABEL_18:
      v11 = *(unsigned __int16 *)(v4 + 2) & ~(1 << a2);
      *(_WORD *)(v4 + 2) = v11;
      if ( (_WORD)v11 )
        return v8;
    }
    if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 && a3 )
    {
      ExFreePoolWithTag((PVOID)v4, 0x58707249u);
      *(_BYTE *)(a1 + 71) &= ~0x40u;
      *(_QWORD *)(a1 + 200) = 0LL;
    }
  }
  return v8;
}
