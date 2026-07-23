/*
 * XREFs of PoFxRegisterDevice @ 0x14074BA40
 * Callers:
 *     DifPoFxRegisterDeviceWrapper @ 0x140635E30 (DifPoFxRegisterDeviceWrapper.c)
 * Callees:
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140AB7D1C (PopFxConvertV1Components.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterDevice(_QWORD *a1, int *a2, __int64 *a3)
{
  int *v3; // r14
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v22; // [rsp+48h] [rbp-49h]
  __int64 v23; // [rsp+50h] [rbp-41h]
  __int64 v24; // [rsp+58h] [rbp-39h]
  __int64 v25; // [rsp+68h] [rbp-29h] BYREF
  __int64 v26; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+78h] [rbp-19h]
  __int64 v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp-1h]
  __int64 v31; // [rsp+A8h] [rbp+17h]
  __int64 v32; // [rsp+B0h] [rbp+1Fh]
  char v35; // [rsp+110h] [rbp+7Fh]

  v3 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = 20LL;
  memset_0(&v25, 0, 0x50uLL);
  v7 = *a2;
  if ( *a2 != 1 )
  {
    if ( v7 == 2 )
    {
      v16 = *((_QWORD *)a2 + 7);
      v15 = *((_QWORD *)a2 + 8);
      v23 = *((_QWORD *)a2 + 5);
      v28 = v23;
      v17 = *((_QWORD *)a2 + 6);
      v30 = v16;
      v14 = v32;
      v24 = v17;
      v29 = v17;
      goto LABEL_8;
    }
    if ( v7 == 3 )
    {
      v3 = a2;
      v6 = 26LL;
      v15 = *((_QWORD *)a2 + 11);
      v23 = *((_QWORD *)a2 + 5);
      v28 = v23;
      v24 = *((_QWORD *)a2 + 6);
      v29 = v24;
      v30 = *((_QWORD *)a2 + 7);
      v31 = *((_QWORD *)a2 + 8);
      v14 = *((_QWORD *)a2 + 9);
      v32 = v14;
LABEL_8:
      v11 = *((_QWORD *)a2 + 4);
      v10 = *((_QWORD *)a2 + 3);
      v8 = *((_QWORD *)a2 + 2);
      v13 = &a2[v6];
      v27 = v11;
      v26 = v10;
      v25 = v8;
      v9 = *((_QWORD *)a2 + 1);
      if ( (v9 & 0x40) != 0 )
        goto LABEL_30;
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  PopPrintEx(1, (int)"Device using PO_FX_VERSION_V1: devobj 0x%p", a1);
  PopPrintEx(1, (int)" - Driver: \"%wZ\"", a1[1] + 56LL);
  PopPrintEx(1, (int)"\n");
  v8 = *((_QWORD *)a2 + 1);
  v9 = 0LL;
  v10 = *((_QWORD *)a2 + 2);
  v11 = *((_QWORD *)a2 + 3);
  v12 = (unsigned int)a2[1];
  v22 = *((_QWORD *)a2 + 7);
  v23 = *((_QWORD *)a2 + 4);
  v28 = v23;
  v24 = *((_QWORD *)a2 + 5);
  v29 = v24;
  v30 = *((_QWORD *)a2 + 6);
  v25 = v8;
  v26 = v10;
  v27 = v11;
  v13 = (int *)PopFxConvertV1Components(a2 + 16, v12);
  v14 = v32;
  v15 = v22;
LABEL_9:
  v35 = 0;
  if ( v31 )
  {
    if ( v14 )
    {
      v35 = 1;
      if ( !v8 && !v10 && !v11 && !v23 && !v24 )
        v9 |= 0x40uLL;
      goto LABEL_18;
    }
  }
  else if ( !v14 )
  {
LABEL_18:
    v18 = PopFxRegisterDevice(a1, v15, v9, (__int64)a3);
    if ( v18 >= 0 && v35 )
    {
      v19 = v3[20];
      v20 = *a3;
      if ( v19 == -1 )
      {
        *(_DWORD *)(v20 + 956) = 0;
      }
      else
      {
        if ( !v19 )
          v19 = PopFxDirectedFxDefaultTimeout;
        *(_DWORD *)(v20 + 956) = v19;
      }
      if ( (v3[2] & 2) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v20 + 864), 0x200u);
      if ( (v3[2] & 4) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v20 + 864), 0x400u);
      _InterlockedOr((volatile signed __int32 *)(v20 + 864), 0x20u);
    }
    goto LABEL_31;
  }
LABEL_30:
  v18 = -1073741811;
LABEL_31:
  if ( v13 && *a2 == 1 )
    ExFreePoolWithTag(v13, 0x4D584650u);
  return (unsigned int)v18;
}
