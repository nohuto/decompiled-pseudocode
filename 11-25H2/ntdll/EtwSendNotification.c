/*
 * XREFs of EtwSendNotification @ 0x1800EF950
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EFBE8 (EtwpReceiveReplyDataBlock.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwSendNotification(int *a1, int a2, _BYTE *a3, __int64 a4, __int64 a5)
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
  _DWORD v24[2]; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[128]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[32]; // [rsp+F0h] [rbp-10h] BYREF
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  ULONG *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  _DWORD *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]

  v5 = *((_BYTE *)a1 + 12);
  v7 = a1[4];
  v8 = 1;
  v27 = a4;
  v26 = a5;
  v24[1] = 0;
  if ( v5 == 1 )
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( !v7 )
      v7 = 60000;
  }
  v11 = NtTraceControl(17LL, a1, (unsigned int)a1[1]);
  if ( v11 )
    v14 = RtlNtStatusToDosError(v11);
  else
    v14 = 0;
  if ( v5 )
  {
    v16 = a1[5];
    if ( v14 )
    {
      if ( (unsigned int)dword_1801CE6F0 > 2 )
      {
        if ( (byte_1801CE700 & 0xA) == 0 || (qword_1801CE708 & 0xA) != qword_1801CE708 )
          v8 = 0;
        if ( v8 )
        {
          v30 = a1 + 10;
          v24[0] = *a1;
          v32 = v24;
          v33 = 4LL;
          v35 = 4LL;
          v34 = &v23;
          v31 = 16LL;
          v23 = v14;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CE6F0, byte_1801A4598, v12, v13, 5, (__int64)v29);
        }
      }
    }
    else
    {
      v17 = (void *)*((_QWORD *)a1 + 3);
      if ( v16 )
      {
        v18 = 120;
        memset_thunk_772440563353939046(v28, 0, 0x78uLL);
        if ( (unsigned int)dword_1801CE6F0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801CE6F0, 10LL) )
        {
          v31 = 16LL;
          v30 = a1 + 10;
          v25 = *a1;
          v34 = &v23;
          v32 = &v25;
          v36 = v24;
          v33 = 4LL;
          v23 = v16;
          v35 = 4LL;
          v24[0] = v7;
          v37 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CE6F0, byte_1801A45E7, v19, v21, 6, (__int64)v29);
        }
        v20 = v28;
        v22 = *a1;
        if ( *a1 != 3 )
          v18 = a2;
        if ( v22 != 3 )
          v20 = a3;
        LOBYTE(v19) = v22 == 3;
        v14 = EtwpReceiveReplyDataBlock((_DWORD)v17, v7, v19, v16, (__int64)v20, v18, v27, v26, v22);
      }
      if ( v17 )
        NtClose(v17);
    }
  }
  return v14;
}
