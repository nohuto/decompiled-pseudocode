/*
 * XREFs of SmKmFileInfoDuplicate @ 0x140AAC5AC
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140394620 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14069B8C0 (ZwDuplicateObject.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SmKmFileInfoCleanup @ 0x140AAC740 (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SmKmFileInfoDuplicate(_OWORD *a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  void *v5; // rcx
  size_t v6; // rbx
  void *v7; // rax
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  HANDLE TargetHandle[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h]
  HANDLE SourceProcessHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  SourceProcessHandle = 0LL;
  memset_0(TargetHandle, 0, 0x40uLL);
  v4 = ObOpenObjectByPointer(SmKmGlobals, 0x200u, 0LL, 0, 0LL, 0, &SourceProcessHandle);
  if ( v4 >= 0 )
  {
    if ( !*(_QWORD *)a2
      || (v4 = ZwDuplicateObject(SourceProcessHandle, *(HANDLE *)a2, SourceProcessHandle, TargetHandle, 0, 0, 6u),
          v4 >= 0)
      && (Object = 0LL,
          v4 = ObReferenceObjectByHandle(TargetHandle[0], 0x10003u, 0LL, 0, &Object, 0LL),
          TargetHandle[1] = Object,
          v4 >= 0) )
    {
      v5 = *(void **)(a2 + 16);
      if ( v5 )
      {
        *(_QWORD *)&v14 = *(_QWORD *)(a2 + 16);
        PsReferenceSiloContext(v5);
        *((_QWORD *)&v14 + 1) = *(_QWORD *)(a2 + 24);
      }
      v6 = (unsigned int)(16 * *(_DWORD *)(a2 + 56));
      v7 = (void *)SmAllocEx(v6, 1951952243LL, -1);
      *(_QWORD *)&v16 = v7;
      if ( v7 )
      {
        memmove(v7, *(const void **)(a2 + 48), v6);
        v8 = *(_DWORD *)(a2 + 56);
        v9 = v14;
        *a1 = *(_OWORD *)TargetHandle;
        DWORD2(v16) = v8;
        v10 = v15;
        a1[1] = v9;
        v11 = v16;
        a1[2] = v10;
        a1[3] = v11;
        memset_0(TargetHandle, 0, 0x40uLL);
        v4 = 0;
      }
      else
      {
        v4 = -1073741670;
      }
    }
  }
  if ( SourceProcessHandle )
    ZwClose(SourceProcessHandle);
  SmKmFileInfoCleanup(TargetHandle);
  return (unsigned int)v4;
}
