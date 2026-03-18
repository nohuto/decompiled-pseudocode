/*
 * XREFs of BiGetRegistryValue @ 0x140969DB4
 * Callers:
 *     BiWasFirmwareModified @ 0x1404C15A4 (BiWasFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x1408022D8 (BiMarkTreatAsSystemStore.c)
 *     BiIsPortableWorkspaceBoot @ 0x140804D34 (BiIsPortableWorkspaceBoot.c)
 *     BiGetObjectDescription @ 0x14096A86C (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x14096B820 (BcdGetElementDataWithFlags.c)
 *     BiUnloadHiveByHandle @ 0x140A24908 (BiUnloadHiveByHandle.c)
 *     BiIsSystemStore @ 0x140A24C40 (BiIsSystemStore.c)
 *     BiIsSystemStoreCandidate @ 0x140A24CC8 (BiIsSystemStoreCandidate.c)
 *     BiIsWinPEBoot @ 0x140A2584C (BiIsWinPEBoot.c)
 *     BiGetSavedBootEntry @ 0x140A284C4 (BiGetSavedBootEntry.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BiZwQueryValueKey @ 0x14049E714 (BiZwQueryValueKey.c)
 *     CmSiCloseSection @ 0x14049F444 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1404A6620 (BiSanitizeHandle.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, unsigned int a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v7; // rbx
  const WCHAR *v8; // rax
  unsigned int i; // r12d
  _DWORD *Pool2; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  void *v15; // rsi
  __int64 v16; // r8
  void *v17; // rax
  ULONG Size; // [rsp+30h] [rbp-68h] BYREF
  NTSTATUS Size_4; // [rsp+34h] [rbp-64h]
  ULONG v21; // [rsp+38h] [rbp-60h] BYREF
  int v22[2]; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v7 = a3;
  v8 = a2;
  v21 = 0;
  Size = 0;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    Pool2 = 0LL;
    *(_QWORD *)v22 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v8);
    v12 = BiSanitizeHandle(a1);
    a1 = v12;
    if ( v7 )
    {
      v14 = BiOpenKey(v12, v7, 131097LL, v22);
      Size_4 = v14;
      v15 = *(void **)v22;
      if ( v14 < 0 )
        goto LABEL_11;
    }
    else
    {
      v15 = (void *)v12;
    }
    v14 = BiZwQueryValueKey(v15, &DestinationString, v13, 0LL, 0, &Size);
    Size_4 = v14;
    if ( v14 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
      if ( !Pool2 )
        goto LABEL_19;
      v14 = BiZwQueryValueKey(v15, &DestinationString, v16, Pool2, Size, &v21);
      Size_4 = v14;
      if ( v14 >= 0 )
      {
        if ( Pool2[1] == a4 )
        {
          Size -= 12;
          v17 = (void *)ExAllocatePool2(0x102uLL);
          *a5 = v17;
          if ( v17 )
          {
            memmove(v17, Pool2 + 3, Size);
            *a6 = Size;
            v14 = 0;
          }
          else
          {
LABEL_19:
            v14 = -1073741670;
          }
        }
        else
        {
          BiLogMessage(4LL, L"Unexpected type for BCD element. Expected type: 0x%x Actual type: 0x%x", a4);
          v14 = -1073741788;
        }
        Size_4 = v14;
      }
    }
LABEL_11:
    if ( v15 != (void *)a1 && v15 )
      CmSiCloseSection(v15);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    if ( v14 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v7 = a3;
    v8 = a2;
  }
  return (unsigned int)v14;
}
