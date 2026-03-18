/*
 * XREFs of IopFreeIrpExtension @ 0x14031B360
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 *     IoCleanupIrp @ 0x14031A4D0 (IoCleanupIrp.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1403DC6BC (IopPerfCompleteRequest.c)
 *     IoSetActivityIdIrp @ 0x140454CF0 (IoSetActivityIdIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404845AC (IopFreeCopyObjectsFromDataBuffer.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140597410 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140597460 (IoClearFsTrackOffsetState.c)
 * Callees:
 *     IopFreeCopyObjectsFromIrp @ 0x14026850C (IopFreeCopyObjectsFromIrp.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char (__fastcall *__fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3))(_QWORD *a1, __int64 a2, unsigned int a3)
{
  char v3; // al
  __int64 v4; // rbx
  char (__fastcall *v8)(_QWORD *, __int64, unsigned int); // rbp
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
        IopFreeCopyObjectsFromIrp(a1);
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
