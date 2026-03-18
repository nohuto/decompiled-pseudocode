/*
 * XREFs of DebugRunMethod @ 0x14006E170
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     GetBaseObject @ 0x14001A7A0 (GetBaseObject.c)
 *     _strtoui64_0 @ 0x140056779 (_strtoui64_0.c)
 *     DebugExpr @ 0x14006DB94 (DebugExpr.c)
 *     IsNumber @ 0x14006E528 (IsNumber.c)
 *     RunMethodCallBack @ 0x14006E600 (RunMethodCallBack.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 ObjectPath; // rax
  const char *v11; // rdx
  void *v12; // rbx
  unsigned __int64 v14[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    v4 = 235;
LABEL_25:
    PrintDebugMessage(v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  if ( a2 )
  {
    if ( dword_14008846C == -1 )
    {
      v14[0] = 0LL;
      v15 = 0LL;
      v2 = DebugExpr(a2, v14, &v15);
      if ( !v2 )
      {
        if ( !v15 )
        {
          PrintDebugMessage(0xE8u, 0LL, 0LL, 0LL, 0LL);
LABEL_26:
          v2 = -4;
          goto LABEL_27;
        }
        qword_1400892D8 = GetBaseObject(v15);
        DereferenceObjectEx(v5);
        dword_14008846C = 0;
        return v2;
      }
    }
    else
    {
      if ( dword_14008846C >= 7 )
      {
        PrintDebugMessage(0xECu, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        v6 = 5LL * dword_14008846C;
        *(_OWORD *)((char *)&unk_1400891C0 + 8 * v6) = 0LL;
        *(_OWORD *)((char *)&unk_1400891C0 + 8 * v6 + 16) = 0LL;
        *((_QWORD *)&unk_1400891C0 + v6 + 4) = 0LL;
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v7 = 5LL * dword_14008846C;
          *((_QWORD *)&unk_1400891C0 + v7 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_14008846C;
          *((_WORD *)&unk_1400891C0 + 4 * v7 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(0xDAu, a2, 0LL, 0LL, 0LL);
      }
      v2 = -2;
    }
LABEL_27:
    dword_14008846C = -1;
    return v2;
  }
  if ( dword_14008846C < 0 )
  {
    v4 = 226;
    goto LABEL_25;
  }
  qword_140088AF0 = 0LL;
  fRunningMethod = 1;
  xmmword_140088AD0 = 0LL;
  xmmword_140088AE0 = 0LL;
  v8 = AsyncEvalObject(
         qword_1400892D8,
         (__int64)&xmmword_140088AD0,
         dword_14008846C,
         (__int64)&unk_1400891C0,
         (__int64)RunMethodCallBack,
         0LL,
         1);
  v9 = v8;
  if ( v8 == 32772 )
  {
    ObjectPath = GetObjectPath(qword_1400892D8);
    v11 = byte_1400753E8;
    v12 = (void *)ObjectPath;
    if ( ObjectPath )
      v11 = (const char *)ObjectPath;
    ConPrintf("\n%s returned PENDING\n", v11);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    RunMethodCallBack(qword_1400892D8 + 120, v8, &xmmword_140088AD0, 0LL);
    v2 = v9 != 0 ? 0xFFFFFFFC : 0;
  }
  DereferenceObjectEx(qword_1400892D8);
  qword_1400892D8 = 0LL;
  dword_14008846C = -1;
  if ( v2 )
    goto LABEL_27;
  return v2;
}
