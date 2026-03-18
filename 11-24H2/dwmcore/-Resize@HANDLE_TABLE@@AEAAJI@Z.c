/*
 * XREFs of ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180192580
 * Callers:
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180191B00 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x1801923CC (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180192730 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall HANDLE_TABLE::Resize(HANDLE_TABLE *this, unsigned int a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  char *v8; // rax
  char *v9; // r15
  unsigned int v11; // [rsp+20h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 3) )
  {
    v7 = -2147024809;
    v11 = 219;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v11, 0LL);
    return v7;
  }
  v4 = *((unsigned int *)this + 2);
  v5 = v4 * *((unsigned int *)this + 3);
  if ( v5 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xDEu, 0LL);
    return v7;
  }
  v6 = v4 * a2;
  if ( v6 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xDFu, 0LL);
    return v7;
  }
  v7 = 0;
  v8 = (char *)DefaultHeap::Realloc(*((void **)this + 3), (unsigned int)v6);
  v9 = v8;
  if ( !v8 )
  {
    v7 = -2147024882;
    v11 = 227;
    goto LABEL_7;
  }
  memset_0(&v8[(unsigned int)v5], 0, (unsigned int)(v6 - v5));
  *((_QWORD *)this + 3) = v9;
  *((_DWORD *)this + 3) = a2;
  return v7;
}
