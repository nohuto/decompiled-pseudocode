/*
 * XREFs of ACPIIoctlAsyncEvalControlMethodCompletion @ 0x140047640
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x14001143C (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x14003A8D8 (ACPIIoctlEvalPostProcessingV2.c)
 */

void __fastcall ACPIIoctlAsyncEvalControlMethodCompletion(__int64 a1, int a2, void *a3, IRP *a4)
{
  $0DFD2FDF994C6E300166ACC59832B319 *v4; // r14
  int v7; // esi
  char v8; // r8
  int v9; // eax
  char v10; // r8

  v4 = &a4->Tail.Overlay.64;
  v7 = a2;
  if ( a2 >= 0 )
  {
    if ( v4->CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 3325952 )
    {
      v8 = 0;
    }
    else
    {
      if ( v4->CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 3325980 )
      {
        if ( v4->CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 3326016 )
        {
          v10 = 0;
        }
        else
        {
          if ( v4->CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 3326024 )
            goto LABEL_6;
          v10 = 1;
        }
        v9 = ACPIIoctlEvalPostProcessingV2(a4, (__int64)a3, v10);
LABEL_5:
        v7 = v9;
LABEL_6:
        dword_1400890B8 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)a3, 1u);
        goto LABEL_7;
      }
      v8 = 1;
    }
    v9 = ACPIIoctlEvalPostProcessingV1(a4, (__int64)a3, v8);
    goto LABEL_5;
  }
LABEL_7:
  ExFreePoolWithTag(a3, 0);
  v4->CurrentStackLocation->Control |= 1u;
  a4->IoStatus.Status = v7;
  IofCompleteRequest(a4, 0);
}
