/*
 * XREFs of WheaPersistBadPageToBcd @ 0x14065B5B0
 * Callers:
 *     WheapProcessEfiBadMemoryPage @ 0x14065A0A8 (WheapProcessEfiBadMemoryPage.c)
 *     WheaAttemptRowOffline @ 0x14065B230 (WheaAttemptRowOffline.c)
 *     EmpRemoveBadS3PageWorker @ 0x140707D10 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     qsort_s @ 0x1404FC9C0 (qsort_s.c)
 *     WheapCountBadPageExtents @ 0x1407C8318 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x1407C8398 (WheapIsPageInList.c)
 *     BcdCreateObject @ 0x140859F94 (BcdCreateObject.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     BcdSetElementData @ 0x1409A60DC (BcdSetElementData.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaPersistBadPageToBcd(UNICODE_STRING *a1)
{
  _QWORD *v1; // rdi
  NTSTATUS v3; // ebx
  HANDLE v4; // rsi
  NTSTATUS ElementData; // eax
  ULONG v6; // r14d
  NTSTATUS v7; // ebx
  _QWORD *Pool2; // rax
  __int64 v9; // rbx
  void *v10; // rcx
  unsigned int v11; // ebx
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+88h] [rbp+48h] BYREF
  HANDLE BcdStoreHandle; // [rsp+90h] [rbp+50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+98h] [rbp+58h] BYREF

  Description = 0LL;
  BcdStoreHandle = 0LL;
  v1 = 0LL;
  BcdObjectHandle = 0LL;
  v3 = BcdOpenStore(a1, BCD_OPEN_NONE, &BcdStoreHandle);
  if ( v3 < 0 )
    goto LABEL_20;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &BcdObjectHandle) < 0 )
  {
    Description.Version = 1;
    Description.Type = 537919488;
    v3 = BcdCreateObject(BcdStoreHandle, &GUID_BAD_MEMORY_GROUP, &Description, &BcdObjectHandle);
    if ( v3 < 0 )
    {
      v4 = BcdObjectHandle;
      goto LABEL_18;
    }
  }
  v4 = BcdObjectHandle;
  BufferSize = 0;
  ElementData = BcdGetElementData(BcdObjectHandle, 0x1700000Au, 0LL, &BufferSize);
  v6 = BufferSize;
  if ( ElementData != -1073741789 )
    v6 = 0;
  v7 = ElementData;
  BufferSize = v6;
  Pool2 = (_QWORD *)ExAllocatePool2(0x102uLL, v6 + 8LL, 0x61656857u);
  v1 = Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    goto LABEL_18;
  }
  if ( v7 != -1073741789 )
  {
LABEL_12:
    v9 = v6 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v1, v9, a1) )
    {
      v3 = 0;
    }
    else
    {
      v1[v9] = a1;
      v11 = v9 + 1;
      qsort_s(v10, v11, 8uLL, WheapPfnComparisonHelper, 0LL);
      if ( (unsigned int)WheapCountBadPageExtents(v1, v11) <= 0x40 )
      {
        v3 = BcdSetElementData(v4, 0x1700000Au, v1, v6 + 8);
        if ( v3 >= 0 )
          v3 = 0;
      }
      else
      {
        v3 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v3 = BcdGetElementData(v4, 0x1700000Au, Pool2, &BufferSize);
  if ( v3 >= 0 )
  {
    v6 = BufferSize;
    goto LABEL_12;
  }
LABEL_18:
  if ( v4 )
    BcdCloseObject(v4);
LABEL_20:
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x61656857u);
  return (unsigned int)v3;
}
