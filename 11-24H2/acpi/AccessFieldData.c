/*
 * XREFs of AccessFieldData @ 0x14000BEC0
 * Callers:
 *     WriteFieldObj @ 0x14000B3B0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x14000B7E0 (ReadFieldObj.c)
 * Callees:
 *     GetFieldUnitRegionObj @ 0x14000C4A0 (GetFieldUnitRegionObj.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AccessBaseField @ 0x14000C680 (AccessBaseField.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 *     PushPreserveWriteObj @ 0x140044438 (PushPreserveWriteObj.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall AccessFieldData(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // r12
  unsigned int v16; // edi
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // r15
  __int64 v20; // rdx
  bool v21; // cf
  unsigned int v22; // ecx
  unsigned __int64 v23; // rsi
  __int64 v24; // r15
  int (__fastcall *v25)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned int v28; // r14d
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned int v33; // ecx
  __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // r12
  int (__fastcall *v39)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v40; // rax
  int *v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // ecx
  unsigned int v44; // edi
  __int64 v45; // r9
  __int64 v46; // r9
  char v47; // cl
  signed __int32 v48[8]; // [rsp+0h] [rbp-A1h] BYREF
  __int64 Src; // [rsp+30h] [rbp-71h] BYREF
  __int64 v50; // [rsp+38h] [rbp-69h] BYREF
  int v51; // [rsp+40h] [rbp-61h] BYREF
  int v52[3]; // [rsp+44h] [rbp-5Dh] BYREF
  _QWORD v53[10]; // [rsp+50h] [rbp-51h] BYREF

  v5 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v14 = a3[3] & 0xF;
    v15 = *(_QWORD *)(a2 + 32);
    if ( a5 )
    {
      if ( v14 && v14 <= 4 )
        v16 = 1 << (v14 - 1);
      else
        v16 = 1;
      v17 = *a3;
      if ( v17 + v16 > *(_DWORD *)(v15 + 8) )
      {
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        PrintDebugMessage(160, *a3, *(_DWORD *)(v15 + 8), v16, 0LL);
        LODWORD(v5) = -1072431100;
        return (unsigned int)v5;
      }
      v18 = a3[2];
      v19 = 0LL;
      v20 = 1LL << v18;
      v21 = v18 < 0x40;
      v52[0] = 0;
      v22 = a3[1];
      if ( v21 )
        v19 = v20;
      v50 = 0LL;
      v23 = *(_QWORD *)v15 + v17;
      v24 = (v19 - 1) << v22;
      if ( v16 > 8 )
      {
        *a4 = -1LL;
        return 0LL;
      }
      if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
        || (v25 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL
        || v25(0LL, v23, &v50, v16, v52) < 0 )
      {
        if ( !(v23 % v16) )
        {
          switch ( v16 )
          {
            case 1u:
              v26 = *(unsigned __int8 *)v23;
              break;
            case 4u:
              v26 = *(unsigned int *)v23;
              break;
            case 2u:
              v26 = *(unsigned __int16 *)v23;
              break;
            case 8u:
              v26 = *(_QWORD *)v23;
              break;
            default:
              v26 = -1LL;
              break;
          }
          goto LABEL_21;
        }
        memmove(&v50, (const void *)v23, v16);
      }
      v26 = v50;
LABEL_21:
      *a4 = v24 & v26;
      return (unsigned int)v5;
    }
    v27 = *a4;
    if ( v14 && v14 <= 4 )
      v28 = 1 << (v14 - 1);
    else
      v28 = 1;
    v29 = *a3;
    if ( v29 + v28 > *(_DWORD *)(v15 + 8) )
    {
      LogError(3222536196LL);
      AcpiDiagTraceAmlError(a1, 3222536196LL);
      PrintDebugMessage(211, *a3, *(_DWORD *)(v15 + 8), v28, 0LL);
      LODWORD(v5) = -1072431100;
    }
    else
    {
      v30 = a3[2];
      v31 = 1LL << v30;
      v32 = 0LL;
      v21 = v30 < 0x40;
      v53[4] = 0xFFFFFFFFLL;
      v33 = a3[1];
      if ( v21 )
        v32 = v31;
      v51 = 0;
      Src = 0LL;
      v34 = (v32 - 1) << v33;
      v35 = *(_QWORD *)v15 + v29;
      v36 = v27 & v34;
      v53[0] = 0LL;
      v53[1] = 255LL;
      v37 = 0LL;
      v53[2] = 0xFFFFLL;
      v53[3] = 0LL;
      memset(&v53[5], 0, 24);
      v53[8] = -1LL;
      if ( v28 > 8 )
        return (unsigned int)v5;
      v38 = v53[v28];
      if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
        goto LABEL_37;
      v39 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
      if ( !v39 )
        goto LABEL_37;
      if ( v34 != v38 )
      {
        if ( v39(0LL, v35, &Src, v28, &v51) < 0 )
        {
LABEL_36:
          v37 = Src;
LABEL_37:
          if ( v35 % v28 )
          {
            if ( v34 != v38 )
            {
              memmove(&Src, (const void *)v35, v28);
              v37 = Src;
            }
            Src = v36 | v37 & ~v34;
            memmove((void *)v35, &Src, v28);
          }
          else
          {
            switch ( v28 )
            {
              case 1u:
                if ( v34 != v38 )
                  v37 = *(unsigned __int8 *)v35;
                Src = v36 | v37 & ~v34;
                *(_BYTE *)v35 = Src;
                _InterlockedOr(v48, 0);
                break;
              case 4u:
                if ( v34 != v38 )
                  v37 = *(unsigned int *)v35;
                Src = v36 | v37 & ~v34;
                *(_DWORD *)v35 = Src;
                _InterlockedOr(v48, 0);
                break;
              case 2u:
                if ( v34 != v38 )
                  v37 = *(unsigned __int16 *)v35;
                Src = v36 | v37 & ~v34;
                *(_WORD *)v35 = Src;
                _InterlockedOr(v48, 0);
                break;
              case 8u:
                if ( v34 != v38 )
                  v37 = *(_QWORD *)v35;
                Src = v36 | v37 & ~v34;
                *(_QWORD *)v35 = Src;
                KeFlushWriteBuffer();
                break;
            }
          }
          return (unsigned int)v5;
        }
        v37 = Src;
      }
      v40 = v36 | v37 & ~v34;
      v41 = &v51;
      Src = v40;
      LOBYTE(v41) = 1;
      if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
             v41,
             v35,
             &Src,
             v28,
             &v51) < 0 )
        goto LABEL_36;
    }
    return (unsigned int)v5;
  }
  v9 = *(_QWORD *)(a2 + 32);
  v50 = 0LL;
  if ( *(_WORD *)(*(_QWORD *)v9 + 66LL) == 132 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)v9 + 96LL);
    if ( a5 )
    {
      return PushAccFieldObj(
               a1,
               ReadFieldObj,
               *(_QWORD *)(v42 + 8) + 64LL,
               *(_QWORD *)(*(_QWORD *)(v42 + 8) + 96LL) + 8LL,
               a4,
               4);
    }
    else
    {
      v43 = a3[2];
      v44 = a3[3];
      v45 = 0LL;
      if ( v43 < 0x40 )
        v45 = 1LL << v43;
      v46 = ~((v45 - 1) << a3[1]);
      if ( (v44 & 0xF) - 1 > 3 || 8 * (1 << ((v44 & 0xF) - 1)) < 64 )
      {
        v47 = 1;
        if ( (v44 & 0xF) - 1 <= 3 )
          v47 = 1 << ((v44 & 0xF) - 1);
        v5 = 1LL << (8 * v47);
      }
      if ( ((v5 - 1) & v46) != 0 && (v44 & 0x60) == 0 )
        return PushPreserveWriteObj(a1, *(_QWORD *)(v42 + 8) + 64LL, *a4);
      else
        return PushAccFieldObj(
                 a1,
                 WriteFieldObj,
                 *(_QWORD *)(v42 + 8) + 64LL,
                 *(_QWORD *)(*(_QWORD *)(v42 + 8) + 96LL) + 8LL,
                 a4,
                 4);
    }
  }
  else
  {
    result = GetFieldUnitRegionObj(v9, &v50);
    if ( !(_DWORD)result )
    {
      v11 = v50;
      if ( v50 )
      {
        v12 = AccessBaseField(a1, v50, (_DWORD)a3, (_DWORD)a4, a5);
        DereferenceObjectEx(v11, v13);
        return v12;
      }
    }
  }
  return result;
}
