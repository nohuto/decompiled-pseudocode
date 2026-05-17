/*
 * XREFs of EtwSendNotification @ 0x1800EE760
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EE9F8 (EtwpReceiveReplyDataBlock.c)
 *     _tlgKeywordOn @ 0x18010D208 (_tlgKeywordOn.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwSendNotification(__int64 a1, int a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  char v5; // r15
  int v7; // esi
  char v8; // r14
  NTSTATUS v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG v14; // edi
  ULONG v16; // r15d
  void *v17; // r14
  int v18; // edi
  __int64 v19; // r8
  _BYTE *v20; // rax
  __int64 v21; // r9
  int v22; // [rsp+40h] [rbp-C0h]
  ULONG v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  _BYTE v29[128]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  int *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  ULONG *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  int *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]

  v5 = *(_BYTE *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = 1;
  v28 = a4;
  v27 = a5;
  v25 = 0;
  if ( v5 == 1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( !v7 )
      v7 = 60000;
  }
  v11 = NtTraceControl(17LL, a1, *(unsigned int *)(a1 + 4), a1, 72, &v25);
  if ( v11 )
    v14 = RtlNtStatusToDosError(v11);
  else
    v14 = 0;
  if ( v5 )
  {
    v16 = *(_DWORD *)(a1 + 20);
    if ( v14 )
    {
      if ( (unsigned int)dword_1801CC6F0 > 2 )
      {
        if ( (byte_1801CC700 & 0xA) == 0 || (qword_1801CC708 & 0xA) != qword_1801CC708 )
          v8 = 0;
        if ( v8 )
        {
          v31 = a1 + 40;
          v24 = *(_DWORD *)a1;
          v33 = &v24;
          v34 = 4LL;
          v36 = 4LL;
          v35 = &v23;
          v32 = 16LL;
          v23 = v14;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CC6F0, byte_1801A2550, v12, v13, 5, (__int64)v30);
        }
      }
    }
    else
    {
      v17 = *(void **)(a1 + 24);
      if ( v16 )
      {
        v18 = 120;
        memset_thunk_772440563353939046(v29, 0, 0x78uLL);
        if ( (unsigned int)dword_1801CC6F0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801CC6F0, 10LL) )
        {
          v32 = 16LL;
          v31 = a1 + 40;
          v26 = *(_DWORD *)a1;
          v35 = &v23;
          v33 = &v26;
          v37 = &v24;
          v34 = 4LL;
          v23 = v16;
          v36 = 4LL;
          v24 = v7;
          v38 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CC6F0, byte_1801A259F, v19, v21, 6, (__int64)v30);
        }
        v20 = v29;
        v22 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 != 3 )
          v18 = a2;
        if ( v22 != 3 )
          v20 = a3;
        LOBYTE(v19) = v22 == 3;
        v14 = EtwpReceiveReplyDataBlock((_DWORD)v17, v7, v19, v16, (__int64)v20, v18, v28, v27, v22);
      }
      if ( v17 )
        NtClose(v17);
    }
  }
  return v14;
}
