/*
 * XREFs of NtAlpcCancelMessage @ 0x140A29A50
 * Callers:
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 */

__int64 __fastcall NtAlpcCancelMessage(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v6; // edi
  int v7; // r15d
  void *v8; // rsi
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  PVOID Object[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_11;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v6 = *(_DWORD *)(a3 + 20);
    v7 = *(_DWORD *)(a3 + 24);
    v8 = *(void **)(a3 + 8);
    goto LABEL_4;
  }
  if ( (a2 & 4) != 0 )
  {
    if ( (a3 & 3) != 0 )
      goto LABEL_14;
    v6 = *(_DWORD *)(a3 + 12);
    v7 = *(_DWORD *)(a3 + 16);
    v8 = (void *)*(unsigned int *)(a3 + 4);
  }
  else
  {
    if ( (a3 & 3) != 0 )
LABEL_14:
      ExRaiseDatatypeMisalignment();
    v6 = *(_DWORD *)(a3 + 20);
    v7 = *(_DWORD *)(a3 + 24);
    v8 = *(void **)(a3 + 8);
  }
  Object[1] = v8;
LABEL_4:
  if ( !v6 )
  {
    v9 = -1073741559;
    goto LABEL_11;
  }
  Object[0] = 0LL;
  v9 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, Object, 0LL);
  if ( v9 >= 0 )
  {
    v11 = v6;
    v12 = Object[0];
    v9 = AlpcpLookupMessage((__int64)Object[0], v11, v7, v10, &BugCheckParameter2);
    if ( v9 >= 0 )
    {
      if ( (a2 & 8) == 0 )
        goto LABEL_8;
      if ( (v12[104] & 6) == 4 )
      {
        if ( v8 == *(void **)(BugCheckParameter2 + 104) )
        {
LABEL_8:
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v12, BugCheckParameter2, a2);
          }
          goto LABEL_10;
        }
      }
      else if ( v8 == *(void **)(BugCheckParameter2 + 112) )
      {
        goto LABEL_8;
      }
      AlpcpUnlockMessage(BugCheckParameter2);
      v9 = -1073740007;
    }
LABEL_10:
    ObfDereferenceObject(v12);
  }
LABEL_11:
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
