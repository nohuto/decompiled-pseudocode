/*
 * XREFs of ?ulSimpleOrientation@RFONTOBJ@@QEAAKAEAVUDCOBJ@@@Z @ 0x1401DA774
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::ulSimpleOrientation(RFONTOBJ *this, struct UDCOBJ *a2)
{
  int v2; // edi
  __int16 v3; // r9
  int v4; // ecx
  unsigned int v5; // ebx
  float v6; // xmm0_4
  BOOL v7; // edx
  bool v8; // r8
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  int v12; // r8d
  bool v13; // r9
  float v14; // xmm0_4
  int v15; // r9d
  int v16; // r10d
  int v17; // r11d
  unsigned int v18; // ecx
  __int64 result; // rax
  float *v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (*(float *)(*(_QWORD *)this + 392LL) > 0.0) - (*(float *)(*(_QWORD *)this + 392LL) < 0.0);
  v4 = (__PAIR64__(*(float *)(*(_QWORD *)this + 396LL) > 0.0, *(_DWORD *)(*(_QWORD *)this + 396LL))
      - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 1) == 0 )
    return 3601LL;
  v5 = v3 & 0x708 | v4 & 0xA8C | -v4 & 0x384;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
    return v5;
  DC::QuickInitXform(*(_QWORD *)a2, &v20, 516LL);
  v6 = v20[1];
  v7 = *v20 > 0.0;
  v8 = v6 > 0.0;
  v9 = v6 > 0.0;
  v10 = v6 == 0.0;
  v11 = v20[2];
  v12 = v8 - (!v9 && !v10);
  v13 = v11 > 0.0;
  v9 = v11 > 0.0;
  v10 = v11 == 0.0;
  v14 = v20[3];
  v15 = v13 - (!v9 && !v10);
  LOBYTE(v2) = v14 < 0.0;
  v16 = (v14 > 0.0) - v2;
  v17 = (v7 ^ (unsigned __int8)~(_BYTE)v12) & 1;
  if ( !(v17 | (v15 + v12) | (v7 - v16)) )
  {
    v18 = (v12 & 0x384) + (v15 & 0xA8C) + v5 + (v7 & 0x708);
    goto LABEL_5;
  }
  if ( v17 | (v16 + v7) | (v12 - v15) )
    return 3601LL;
  v18 = (v16 & 0xE10) + (v7 & 0x1518) + (v12 & 0x189C) + (-v12 & 0x1194) - v5;
LABEL_5:
  result = v18 - 3600;
  if ( v18 < 0xE10 )
    return v18;
  return result;
}
