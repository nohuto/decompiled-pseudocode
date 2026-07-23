/*
 * XREFs of EtwpRegTraceCallback @ 0x1409764B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpCapturePreviousRegistryData @ 0x140976E30 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x140976F40 (EtwpCaptureRegistryData.c)
 *     CmCallbackGetKeyObjectID @ 0x1409C76A0 (CmCallbackGetKeyObjectID.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegTraceCallback(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  _DWORD *v5; // r13
  unsigned __int16 *v6; // r11
  __int64 v8; // rbx
  unsigned __int16 **v9; // rax
  int v10; // r12d
  int v11; // r8d
  int v12; // edi
  int v13; // r10d
  int v14; // esi
  int v15; // r15d
  int v16; // edx
  unsigned int v17; // r9d
  int **v18; // rax
  int *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  ULONG v25; // r9d
  ULONGLONG v26; // rdx
  ULONG v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rax
  ULONG v30; // edx
  __int64 v31; // rax
  struct _EVENT_DATA_DESCRIPTOR *v32; // rcx
  __int64 v33; // rdx
  PVOID v34; // rax
  int *v35; // rax
  __int64 v36; // rdx
  int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int16 v40; // ax
  __int64 v41; // rdx
  EVENT_DESCRIPTOR v42; // xmm0
  ULONG v43; // edx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  struct _EVENT_DATA_DESCRIPTOR *v47; // rcx
  __int64 v48; // rax
  PVOID *v49; // rax
  __int64 v50; // rax
  unsigned __int16 v51; // ax
  ULONGLONG Buffer; // rdx
  ULONG Length; // r8d
  __int64 v54; // rax
  unsigned __int16 v55; // ax
  unsigned int v56; // ecx
  unsigned __int16 v57; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v58; // [rsp+34h] [rbp-CCh]
  int v59; // [rsp+38h] [rbp-C8h]
  int v60; // [rsp+3Ch] [rbp-C4h]
  int v61; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v63; // [rsp+48h] [rbp-B8h] BYREF
  int v64; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v66; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v67; // [rsp+60h] [rbp-A0h]
  int v68; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  int v70; // [rsp+78h] [rbp-88h] BYREF
  int v71; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v72; // [rsp+80h] [rbp-80h] BYREF
  PVOID v73; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING ObjectName; // [rsp+90h] [rbp-70h] BYREF
  PCUNICODE_STRING v75; // [rsp+98h] [rbp-68h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v78[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v79; // [rsp+D0h] [rbp-30h] BYREF

  v3 = 0;
  v75 = 0LL;
  ObjectName = 0LL;
  v67 = 0LL;
  v5 = 0LL;
  v68 = 0;
  v6 = 0LL;
  v70 = 0;
  v66 = 0;
  v64 = 0;
  Object = 0LL;
  v73 = 0LL;
  P = 0LL;
  v72 = 0;
  v71 = 0;
  v58 = 0;
  v57 = 0;
  v63 = 0;
  EventDescriptor = 0LL;
  switch ( 0x140000000uLL )
  {
    case 0uLL:
      if ( (EtwpRegTraceOptions & 4) != 0 )
        EtwpCapturePreviousRegistryData(a3);
      return 0LL;
    case 0xDuLL:
      v8 = 1LL;
      Object = *(PVOID *)a3;
      v10 = 0;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_CLOSE_KEY;
      goto LABEL_51;
    case 0xEuLL:
      v49 = *(PVOID **)(a3 + 16);
      v10 = 0;
      v8 = a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_DELETE_KEY;
      Object = *v49;
      goto LABEL_51;
    case 0xFuLL:
      v8 = a3;
      v41 = *(_QWORD *)(a3 + 16);
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_SET_VALUE_KEY;
      v6 = *(unsigned __int16 **)(v41 + 8);
      v66 = *(_DWORD *)(v41 + 20);
      Object = *(PVOID *)a3;
      v64 = *(_DWORD *)(v41 + 32);
      v67 = v6;
      if ( (EtwpRegTraceOptions & 2) != 0 && *(int *)(a3 + 8) >= 0 )
      {
        v51 = EtwpCaptureRegistryData(&P, *(_QWORD *)(v41 + 24));
        v6 = v67;
        v58 = v51;
        v57 = v51;
      }
      v5 = *(_DWORD **)(a3 + 32);
      v13 = 64;
      v62 = 128;
      v11 = 0;
      v12 = 0;
      v10 = 1;
      v15 = 32;
      v14 = 16;
      goto LABEL_9;
    case 0x10uLL:
      v48 = *(_QWORD *)(a3 + 16);
      v10 = 1;
      v8 = a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_DELETE_VALUE_KEY;
      v6 = *(unsigned __int16 **)(v48 + 8);
      Object = *(PVOID *)a3;
      v67 = v6;
      goto LABEL_51;
    case 0x11uLL:
      v36 = *(_QWORD *)(a3 + 16);
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_SET_INFORMATION_KEY;
      v66 = *(_DWORD *)(v36 + 8);
      v37 = *(_DWORD *)(v36 + 24);
      goto LABEL_48;
    case 0x13uLL:
      v8 = a3;
      v38 = *(_QWORD *)(a3 + 16);
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_ENUMERATE_KEY;
      v68 = *(_DWORD *)(v38 + 8);
      v66 = *(_DWORD *)(v38 + 12);
      v64 = **(_DWORD **)(v38 + 32);
      if ( (EtwpRegTraceOptions & 2) != 0 && *(int *)(a3 + 8) >= 0 )
      {
        v58 = EtwpCaptureRegistryData(&P, *(_QWORD *)(v38 + 16));
        v6 = 0LL;
        v57 = v58;
      }
      goto LABEL_53;
    case 0x14uLL:
      v8 = a3;
      v39 = *(_QWORD *)(a3 + 16);
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_ENUMERATE_VALUE_KEY;
      v68 = *(_DWORD *)(v39 + 8);
      v66 = *(_DWORD *)(v39 + 12);
      v64 = **(_DWORD **)(v39 + 32);
      if ( (EtwpRegTraceOptions & 2) != 0 && *(int *)(a3 + 8) >= 0 )
      {
        v40 = EtwpCaptureRegistryData(&P, *(_QWORD *)(v39 + 16));
        v13 = 64;
        v58 = v40;
        v57 = v40;
        v6 = 0LL;
        v62 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v14 = 16;
        v16 = 8;
        v15 = 32;
      }
      else
      {
LABEL_53:
        v13 = 64;
        v62 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v14 = 16;
        v16 = 8;
        v15 = 32;
      }
      goto LABEL_10;
    case 0x15uLL:
      v36 = *(_QWORD *)(a3 + 16);
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_KEY;
      v66 = *(_DWORD *)(v36 + 8);
      v37 = **(_DWORD **)(v36 + 32);
LABEL_48:
      v8 = a3;
      v64 = v37;
      if ( (EtwpRegTraceOptions & 2) != 0 && *(int *)(a3 + 8) >= 0 )
      {
        v58 = EtwpCaptureRegistryData(&P, *(_QWORD *)(v36 + 16));
        v6 = 0LL;
        v57 = v58;
      }
      v10 = 0;
      goto LABEL_46;
    case 0x16uLL:
      v8 = a3;
      v33 = *(_QWORD *)(a3 + 16);
      v34 = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_VALUE_KEY;
      v6 = *(unsigned __int16 **)(v33 + 8);
      Object = v34;
      v66 = *(_DWORD *)(v33 + 16);
      v35 = *(int **)(v33 + 40);
      v67 = v6;
      v64 = *v35;
      if ( (EtwpRegTraceOptions & 2) != 0 && *(int *)(a3 + 8) >= 0 )
      {
        v55 = EtwpCaptureRegistryData(&P, *(_QWORD *)(v33 + 24));
        v6 = v67;
        v58 = v55;
        v57 = v55;
      }
      v10 = 1;
LABEL_46:
      v13 = 64;
      v11 = 0;
      v12 = 0;
      v15 = 32;
      v14 = 16;
      goto LABEL_8;
    case 0x17uLL:
      v50 = *(_QWORD *)(a3 + 16);
      v15 = 32;
      v8 = a3;
      Object = *(PVOID *)a3;
      v13 = 0;
      v62 = 0;
      v16 = 8;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY;
      v10 = 0;
      v68 = *(_DWORD *)(v50 + 16);
      v11 = 0;
      v14 = 0;
      v12 = 0;
      v64 = **(_DWORD **)(v50 + 32);
      goto LABEL_10;
    case 0x1AuLL:
      v8 = a3;
      v9 = *(unsigned __int16 ***)(a3 + 16);
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_CREATE_KEY;
      Object = v9[1];
      if ( *(int *)(a3 + 8) < 0 )
        goto LABEL_6;
      v70 = *(_DWORD *)v9[8];
LABEL_5:
      v73 = *(PVOID *)a3;
LABEL_6:
      v6 = *v9;
      v10 = 1;
      v67 = *v9;
      v11 = 2;
      v12 = 4;
      goto LABEL_7;
    case 0x1CuLL:
      v8 = a3;
      v9 = *(unsigned __int16 ***)(a3 + 16);
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_OPEN_KEY;
      Object = v9[1];
      if ( *(int *)(a3 + 8) >= 0 )
        goto LABEL_5;
      goto LABEL_6;
    case 0x1EuLL:
      v42 = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_FLUSH_KEY;
      goto LABEL_65;
    case 0x24uLL:
      v42 = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY;
      goto LABEL_65;
    case 0x26uLL:
      v42 = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_SET_SECURITY_KEY;
LABEL_65:
      v10 = 0;
      Object = *(PVOID *)a3;
      v8 = a3;
      EventDescriptor = v42;
LABEL_51:
      v12 = 0;
      v11 = 0;
LABEL_7:
      v13 = 0;
      v14 = 0;
      v15 = 0;
LABEL_8:
      v62 = 0;
LABEL_9:
      v16 = 0;
LABEL_10:
      v59 = v13;
      v61 = v11;
      v60 = v16;
      if ( (EtwpRegTraceOptions & 1) != 0 )
      {
        v3 = 1;
        if ( Object )
        {
          CmCallbackGetKeyObjectID(&EtwpRegTraceCookie, Object, 0LL, &ObjectName);
          v13 = v59;
          v16 = v60;
          v6 = v67;
          v11 = v61;
          v75 = ObjectName;
          v58 = v57;
        }
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&Object;
      if ( v12 )
      {
        v78[1] = 8LL;
        v78[0] = &v73;
        v17 = 3;
        v18 = (int **)&v79;
      }
      else
      {
        v17 = 2;
        v18 = (int **)v78;
      }
      v19 = &EtwpNull;
      if ( v8 != 1 )
        v19 = (int *)(v8 + 8);
      *v18 = v19;
      v18[1] = (int *)4;
      if ( v16 )
      {
        v20 = 2LL * v17++;
        *(&UserData.Ptr + v20) = (ULONGLONG)&v68;
        *((_QWORD *)&UserData.Size + v20) = 4LL;
      }
      if ( v14 )
      {
        v21 = 2LL * v17++;
        *(&UserData.Ptr + v21) = (ULONGLONG)&v66;
        *((_QWORD *)&UserData.Size + v21) = 4LL;
      }
      if ( v11 )
      {
        v22 = 2LL * v17++;
        *(&UserData.Ptr + v22) = (ULONGLONG)&v70;
        *((_QWORD *)&UserData.Size + v22) = 4LL;
      }
      if ( v15 )
      {
        v23 = 2LL * v17++;
        *(&UserData.Ptr + v23) = (ULONGLONG)&v64;
        *((_QWORD *)&UserData.Size + v23) = 4LL;
      }
      if ( v3 )
      {
        if ( v75 )
        {
          Buffer = (ULONGLONG)v75->Buffer;
          if ( Buffer )
          {
            Length = v75->Length;
            if ( (_WORD)Length )
            {
              v54 = 2LL * v17++;
              *(&UserData.Ptr + v54) = Buffer;
              *(&UserData.Size + 2 * v54) = Length;
              *(&UserData.Reserved + 2 * v54) = 0;
            }
          }
        }
      }
      v24 = 2LL * v17;
      v25 = v17 + 1;
      *(&UserData.Ptr + v24) = (ULONGLONG)&EtwpNull;
      *((_QWORD *)&UserData.Size + v24) = 2LL;
      if ( v10 )
      {
        if ( v6 )
        {
          v26 = *((_QWORD *)v6 + 1);
          if ( v26 )
          {
            v27 = *v6;
            if ( (_WORD)v27 )
            {
              v28 = 2LL * v25++;
              *(&UserData.Ptr + v28) = v26;
              *(&UserData.Size + 2 * v28) = v27;
              *(&UserData.Reserved + 2 * v28) = 0;
            }
          }
        }
        v29 = 2LL * v25++;
        *(&UserData.Ptr + v29) = (ULONGLONG)&EtwpNull;
        *((_QWORD *)&UserData.Size + v29) = 2LL;
      }
      if ( v13 )
      {
        v30 = v58;
        v31 = v25++;
        v31 *= 2LL;
        *(&UserData.Ptr + v31) = (ULONGLONG)&v57;
        *((_QWORD *)&UserData.Size + v31) = 2LL;
        if ( (_WORD)v30 )
        {
          v32 = &UserData + v25++;
          v32->Ptr = (ULONGLONG)P;
          v32->Size = v30;
          v32->Reserved = 0;
        }
      }
      if ( v62 )
      {
        if ( v5 )
        {
          v56 = v5[2];
          v72 = v56;
          v71 = v5[1];
          v63 = 2048;
          if ( v56 <= 0x800 )
            v63 = v56;
        }
        v43 = v63;
        v44 = 2LL * v25;
        *(&UserData.Ptr + v44) = (ULONGLONG)&v71;
        *((_QWORD *)&UserData.Size + v44) = 4LL;
        v45 = 2LL * (v25 + 1);
        *(&UserData.Ptr + v45) = (ULONGLONG)&v72;
        *((_QWORD *)&UserData.Size + v45) = 4LL;
        v46 = v25 + 2;
        v25 += 3;
        v46 *= 2LL;
        *(&UserData.Ptr + v46) = (ULONGLONG)&v63;
        *((_QWORD *)&UserData.Size + v46) = 2LL;
        if ( (_WORD)v43 )
        {
          v47 = &UserData + v25++;
          v47->Ptr = (ULONGLONG)(v5 + 3);
          v47->Size = v43;
          v47->Reserved = 0;
        }
      }
      if ( v8 == 1 || *(int *)(v8 + 8) >= 0 )
        EventDescriptor.Level = 2;
      else
        EventDescriptor.Level = 1;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, v25, &UserData);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      break;
    default:
      return 0LL;
  }
  return 0LL;
}
