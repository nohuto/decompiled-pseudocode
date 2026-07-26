/*
 * XREFs of NdisSetupDmaTransfer @ 0x1400DD610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisSetupDmaTransfer(
        PNDIS_STATUS Status,
        NDIS_HANDLE NdisDmaHandle,
        PNDIS_BUFFER Buffer,
        ULONG Offset,
        ULONG Length,
        BOOLEAN WriteToDevice)
{
  __int64 v7; // rcx
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, PNDIS_BUFFER, __int64, char *, ULONG *, BOOLEAN); // r10
  void (__fastcall *v12)(_QWORD, PNDIS_BUFFER, _QWORD, char *, ULONG, int); // r14
  BOOLEAN v13; // r12
  ULONG v14; // ebx
  __int64 v15; // r15
  char *v16; // r9
  __int64 v17; // r8
  BOOLEAN v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+28h] [rbp-40h]
  ULONG v20; // [rsp+78h] [rbp+10h] BYREF

  v7 = *((_QWORD *)NdisDmaHandle + 4);
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(void (__fastcall **)(__int64, PNDIS_BUFFER, __int64, char *, ULONG *, BOOLEAN))(v10 + 64);
  v12 = *(void (__fastcall **)(_QWORD, PNDIS_BUFFER, _QWORD, char *, ULONG, int))(v10 + 40);
  if ( *((_BYTE *)NdisDmaHandle + 48) )
    goto LABEL_4;
  v13 = WriteToDevice;
  v14 = Length;
  *((_BYTE *)NdisDmaHandle + 48) = 1;
  v15 = Offset;
  v16 = (char *)Buffer->StartVa + Buffer->ByteOffset;
  v17 = *(_QWORD *)NdisDmaHandle;
  v18 = v13;
  v20 = v14;
  v11(v7, Buffer, v17, &v16[v15], &v20, v18);
  if ( v20 != v14 )
  {
    LOBYTE(v19) = v13;
    v12(
      *((_QWORD *)NdisDmaHandle + 4),
      Buffer,
      *(_QWORD *)NdisDmaHandle,
      (char *)Buffer->StartVa + Buffer->ByteOffset + v15,
      v20,
      v19);
    *((_BYTE *)NdisDmaHandle + 48) = 0;
LABEL_4:
    *Status = -1073741670;
    return;
  }
  *Status = 0;
}
