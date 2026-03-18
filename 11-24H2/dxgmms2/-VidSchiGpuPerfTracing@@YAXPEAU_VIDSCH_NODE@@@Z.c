/*
 * XREFs of ?VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004ECF4
 * Callers:
 *     ?VidSchiNodePerfTracingThread@@YAXPEAX@Z @ 0x14004EFE0 (-VidSchiNodePerfTracingThread@@YAXPEAX@Z.c)
 * Callees:
 *     RtlULongLongMult @ 0x1400348C0 (RtlULongLongMult.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004B5E4 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     McTemplateK0xqxxxxqxqxx_EtwWriteTransfer @ 0x14004F528 (McTemplateK0xqxxxxqxqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

void __fastcall VidSchiGpuPerfTracing(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  int v4; // ecx
  int v5; // esi
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  ULONGLONG v9; // rbx
  int v10; // [rsp+70h] [rbp-90h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp-88h] BYREF
  _DXGKARG_QUERYADAPTERINFO v12; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v13[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v14; // [rsp+D0h] [rbp-30h]
  int v15; // [rsp+E0h] [rbp-20h]
  char v16; // [rsp+E4h] [rbp-1Ch]
  __int128 v17; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v18; // [rsp+F8h] [rbp-8h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+110h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 3);
  *((_DWORD *)&v12.Type + 1) = 0;
  *(&v12.InputDataSize + 1) = 0;
  *(_QWORD *)&v12.Flags.0 = 0LL;
  HIDWORD(v12.hKmdProcessHandle) = 0;
  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0;
  memset(v13, 0, sizeof(v13));
  v15 = 0;
  v16 = 0;
  v14 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = *((_DWORD *)a1 + 1);
  v12.Type = DXGKQAITYPE_NODEPERFDATA;
  v10 = v4;
  v12.pInputData = &v10;
  v12.pOutputData = &v17;
  v12.InputDataSize = 4;
  v12.OutputDataSize = 44;
  v5 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v1 + 16), &v12);
  if ( v5 >= 0 )
  {
    v10 = 0;
    v12.pInputData = &v10;
    v12.Type = DXGKQAITYPE_ADAPTERPERFDATA;
    v12.pOutputData = v13;
    v12.InputDataSize = 4;
    v12.OutputDataSize = 53;
    v5 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v1 + 16), &v12);
  }
  v6 = KeQueryPerformanceCounter(0LL);
  if ( v5 >= 0 && (byte_140081244 & 8) != 0 )
  {
    pullResult = 0LL;
    if ( RtlULongLongMult(v6.QuadPart - PerformanceCounter.QuadPart, 0x3E8uLL, &pullResult) >= 0 )
      v9 = pullResult / v8;
    else
      v9 = 1000 * (v7 / v8) + 1000 * (v7 % v8) / v8;
    McTemplateK0xqxxxxqxqxx_EtwWriteTransfer(
      *((unsigned __int16 *)a1 + 2),
      DWORD2(v14),
      v15,
      *(_QWORD *)(*(_QWORD *)(v1 + 16) + 412LL),
      *((_WORD *)a1 + 3),
      v13[0],
      SBYTE12(v14),
      v15,
      SBYTE8(v14),
      *((_WORD *)a1 + 2),
      v17,
      SBYTE8(v18),
      SBYTE4(v19),
      v9);
  }
}
