/*
 * XREFs of ?TraceInvalidBatches@CPrimitiveGroup@@AEBAXPEBX_K@Z @ 0x1802A1E8C
 * Callers:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180038F2C (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18012ADD4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CPrimitiveGroup::TraceInvalidBatches(CPrimitiveGroup *this, char *a2, unsigned int a3)
{
  int i; // eax
  char *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  int v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-19h] BYREF
  int *v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int64 *v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  int *v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]
  int *v21; // [rsp+A0h] [rbp+37h]
  __int64 v22; // [rsp+A8h] [rbp+3Fh]

  for ( i = 0; i + 144 <= a3; i += 144 )
  {
    v5 = &a2[i];
    if ( *(_DWORD *)v5 > 3u || *((_DWORD *)v5 + 3) > 7u || (v5[4] & 0x13) != 0 )
    {
      if ( (unsigned int)dword_1803F8D18 > 4 && tlgKeywordOn((__int64)&dword_1803F8D18, 16LL) )
      {
        v10 = *(_DWORD *)(v7 + 4);
        v11 = *(_DWORD *)(v7 + 12);
        v21 = &v10;
        v19 = &v11;
        v17 = &v13;
        v15 = &v12;
        v12 = v8;
        v13 = 3LL;
        v22 = v9;
        v20 = v9;
        v18 = 8LL;
        v16 = v9;
        tlgWriteTransfer_EventWriteTransfer(v6, byte_1803CED34, 0LL, 0LL, 6u, &v14);
      }
      return;
    }
  }
}
