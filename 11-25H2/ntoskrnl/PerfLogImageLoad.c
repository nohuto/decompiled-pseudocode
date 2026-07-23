/*
 * XREFs of PerfLogImageLoad @ 0x14090BDC0
 * Callers:
 *     PsCallImageNotifyRoutines @ 0x14090BC00 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PerfLogImageLoad(unsigned __int16 *a1, __int64 a2, int *a3)
{
  __int64 *v5; // r15
  int v6; // ecx
  int v7; // edx
  PIMAGE_NT_HEADERS v8; // rax
  PVOID v9; // [rsp+50h] [rbp-128h] BYREF
  __int64 v10; // [rsp+58h] [rbp-120h] BYREF
  int v11; // [rsp+60h] [rbp-118h] BYREF
  __int64 v12; // [rsp+64h] [rbp-114h] BYREF
  char v13; // [rsp+6Ch] [rbp-10Ch]
  _BYTE v14[3]; // [rsp+6Dh] [rbp-10Bh]
  _QWORD v15[4]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v16[3]; // [rsp+90h] [rbp-E8h] BYREF
  int v17; // [rsp+A8h] [rbp-D0h]
  int v18; // [rsp+ACh] [rbp-CCh]
  __int64 *v19; // [rsp+B0h] [rbp-C8h]
  __int64 v20; // [rsp+B8h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 *v22; // [rsp+D0h] [rbp-A8h]
  __int64 v23; // [rsp+D8h] [rbp-A0h]
  int *v24; // [rsp+E0h] [rbp-98h]
  __int64 v25; // [rsp+E8h] [rbp-90h]
  __int64 *v26; // [rsp+F0h] [rbp-88h]
  __int64 v27; // [rsp+F8h] [rbp-80h]
  char *v28; // [rsp+100h] [rbp-78h]
  __int64 v29; // [rsp+108h] [rbp-70h]
  _QWORD *v30; // [rsp+110h] [rbp-68h]
  __int64 v31; // [rsp+118h] [rbp-60h]
  __int64 v32; // [rsp+120h] [rbp-58h]
  int v33; // [rsp+128h] [rbp-50h]
  int v34; // [rsp+12Ch] [rbp-4Ch]
  __int64 *v35; // [rsp+130h] [rbp-48h]
  __int64 v36; // [rsp+138h] [rbp-40h]

  if ( a1 )
  {
    v9 = 0LL;
    v15[3] = 0LL;
    if ( *a1 )
    {
      v5 = (__int64 *)(a1 + 4);
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( a2 )
          v6 = *(_DWORD *)(a2 + 464);
        else
          v6 = 0;
        v9 = (PVOID)*((_QWORD *)a3 + 1);
        v10 = *((_QWORD *)a3 + 3);
        v11 = v6;
        *(_WORD *)&v14[1] = 0;
        v12 = 0LL;
        memset(v15, 0, 24);
        v7 = *a3;
        v13 = ((unsigned int)*a3 >> 12) & 0xF;
        *(_WORD *)v14 = BYTE2(v7) & 7;
        v8 = RtlImageNtHeader(v9);
        if ( v8 )
        {
          LODWORD(v12) = v8->OptionalHeader.CheckSum;
          HIDWORD(v12) = v8->FileHeader.TimeDateStamp;
          v15[0] = v8->OptionalHeader.ImageBase;
        }
        if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 4) != 0 )
        {
          UserData.Ptr = (ULONGLONG)&v9;
          *(_QWORD *)&UserData.Size = 8LL;
          v22 = &v10;
          v23 = 8LL;
          v24 = &v11;
          v25 = 4LL;
          v26 = &v12;
          v27 = 4LL;
          v28 = (char *)&v12 + 4;
          v29 = 4LL;
          v30 = v15;
          v31 = 8LL;
          v32 = *v5;
          v33 = *a1;
          v34 = 0;
          v35 = &EtwpNull;
          v36 = 2LL;
          EtwWriteEx(EtwpPsProvRegHandle, &ImageLoad, 0LL, 0, 0LL, 0LL, 8u, &UserData);
        }
        v16[0] = &v9;
        v16[1] = 56LL;
        v16[2] = *v5;
        v17 = *a1;
        v18 = 0;
        v19 = &EtwpNull;
        v20 = 2LL;
        if ( a2 )
          EtwTraceSiloKernelEvent(*(_QWORD *)(a2 + 1520), (struct _KTHREAD *)v16, 3u, 4u, 0x30Au, 0x601903u);
        else
          EtwTraceKernelEvent((int)v16, 3, 4u, 778, 6297859);
      }
    }
  }
}
