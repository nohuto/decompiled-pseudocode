/*
 * XREFs of PopPlPublishInitialPowerDraw @ 0x1405D99C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlPublishSystemPowerChange @ 0x1405D9B3C (PopPlPublishSystemPowerChange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopPlPublishInitialPowerDraw(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned int i; // esi
  unsigned __int16 *v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // [rsp+20h] [rbp-99h]
  int v11; // [rsp+28h] [rbp-91h]
  __int16 v12; // [rsp+40h] [rbp-79h] BYREF
  int v13; // [rsp+44h] [rbp-75h] BYREF
  int v14; // [rsp+48h] [rbp-71h] BYREF
  int v15; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-59h] BYREF
  __int16 *v18; // [rsp+80h] [rbp-39h]
  int v19; // [rsp+88h] [rbp-31h]
  int v20; // [rsp+8Ch] [rbp-2Dh]
  _DWORD *v21; // [rsp+90h] [rbp-29h]
  int v22; // [rsp+98h] [rbp-21h]
  int v23; // [rsp+9Ch] [rbp-1Dh]
  __int64 v24; // [rsp+A0h] [rbp-19h]
  _DWORD v25[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v26; // [rsp+B0h] [rbp-9h]
  int v27; // [rsp+B8h] [rbp-1h]
  int v28; // [rsp+BCh] [rbp+3h]
  int *v29; // [rsp+C0h] [rbp+7h]
  int v30; // [rsp+C8h] [rbp+Fh]
  int v31; // [rsp+CCh] [rbp+13h]
  int *v32; // [rsp+D0h] [rbp+17h]
  int v33; // [rsp+D8h] [rbp+1Fh]
  int v34; // [rsp+DCh] [rbp+23h]
  int *v35; // [rsp+E0h] [rbp+27h]
  int v36; // [rsp+E8h] [rbp+2Fh]
  int v37; // [rsp+ECh] [rbp+33h]

  v3 = *((_QWORD *)a2 + 1);
  v4 = 0LL;
  for ( i = *a2; v4 < *(_QWORD *)(v3 + 48); ++v4 )
  {
    v6 = *(unsigned __int16 **)(*(_QWORD *)(v3 + 56) + 8 * v4);
    if ( !*((_QWORD *)v6 + 3) )
    {
      v7 = *((_DWORD *)v6 + 10);
      i += v7;
      *((_DWORD *)v6 + 8) = v7;
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        v20 = 0;
        v23 = 0;
        v25[1] = 0;
        v13 = 0;
        v28 = 0;
        v31 = 0;
        v15 = 0;
        v34 = 0;
        v18 = &v12;
        v21 = v25;
        v24 = *((_QWORD *)v6 + 1);
        v25[0] = *v6;
        v26 = &v13;
        v29 = &v14;
        v32 = &v15;
        v8 = *((_QWORD *)v6 + 2);
        v14 = v7;
        v12 = 1;
        v19 = 2;
        v22 = 2;
        v27 = 4;
        v30 = 4;
        v33 = 4;
        v9 = *(_DWORD *)(v8 + 28);
        v37 = 0;
        v35 = &v16;
        v16 = v9;
        v36 = 4;
        tlgWriteEx_EtwWriteEx((__int64)&dword_140E07680, (unsigned __int8 *)&word_14004F70E, a3, 1u, v10, v11, 9u, &v17);
      }
    }
  }
  PopPlPublishSystemPowerChange(v3, i);
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 16), *(_BYTE *)(v3 + 24));
}
