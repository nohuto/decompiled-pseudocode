/*
 * XREFs of MiLogAddPhysicalMemory @ 0x14066F068
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 *     MiValidateAddPhysicalMemoryParameters @ 0x1407EA7DC (MiValidateAddPhysicalMemoryParameters.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogAddPhysicalMemory(unsigned __int16 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  int v10; // r11d
  int v11; // eax
  int v12; // ecx
  unsigned __int8 *v13; // rdx
  int v14; // r9d
  _DWORD *v15; // r11
  int v16; // eax
  int v17; // [rsp+20h] [rbp-71h]
  int v18; // [rsp+28h] [rbp-69h]
  ULONG v19; // [rsp+30h] [rbp-61h]
  int v20; // [rsp+40h] [rbp-51h] BYREF
  int v21; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v22; // [rsp+48h] [rbp-49h] BYREF
  __int64 v23; // [rsp+50h] [rbp-41h] BYREF
  __int64 v24; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-31h] BYREF
  int *v26; // [rsp+80h] [rbp-11h]
  int v27; // [rsp+88h] [rbp-9h]
  int v28; // [rsp+8Ch] [rbp-5h]
  __int64 *v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+98h] [rbp+7h]
  int v31; // [rsp+9Ch] [rbp+Bh]
  __int64 *v32; // [rsp+A0h] [rbp+Fh]
  int v33; // [rsp+A8h] [rbp+17h]
  int v34; // [rsp+ACh] [rbp+1Bh]
  int *v35; // [rsp+B0h] [rbp+1Fh]
  int v36; // [rsp+B8h] [rbp+27h]
  int v37; // [rsp+BCh] [rbp+2Bh]
  __int64 *v38; // [rsp+C0h] [rbp+2Fh]
  int v39; // [rsp+C8h] [rbp+37h]
  int v40; // [rsp+CCh] [rbp+3Bh]

  if ( *(_QWORD *)&qword_140E37658 )
  {
    if ( a5 )
    {
      if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 256LL) )
      {
        v16 = *a1;
        v12 = 4;
        v28 = 0;
        v40 = 0;
        v21 = v16;
        v26 = &v21;
        v23 = *a2;
        v29 = &v23;
        v24 = *v7;
        v32 = &v24;
        v35 = &v20;
        LODWORD(v22) = *v15;
        v38 = &v22;
        v30 = 8;
        v33 = 8;
        v13 = (unsigned __int8 *)&byte_140056E07;
        v19 = 7;
        v20 = v14;
        v39 = 4;
        goto LABEL_9;
      }
    }
    else if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 256LL) )
    {
      v11 = *a1;
      v12 = v10 + 4;
      v28 &= v10;
      v20 = v11;
      v26 = &v20;
      v22 = *a2;
      v29 = &v22;
      v23 = *v7;
      v32 = &v23;
      v35 = &v21;
      v30 = v10 + 8;
      v33 = v10 + 8;
      v13 = (unsigned __int8 *)&byte_140056DAF;
      v19 = 6;
      v21 = v8;
LABEL_9:
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v27 = v12;
      v36 = v12;
      tlgWriteEx_EtwWriteEx(v9, v13, (__int64)v7, 1u, v17, v18, v19, &v25);
    }
  }
}
