/*
 * XREFs of ObpCreateDirectoryObject @ 0x140A3B2C0
 * Callers:
 *     NtCreateDirectoryObject @ 0x140A3B280 (NtCreateDirectoryObject.c)
 *     NtCreateDirectoryObjectEx @ 0x140A3B2A0 (NtCreateDirectoryObjectEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 *a1, int a2, int a3, void *a4, int a5)
{
  PVOID v7; // rsi
  char PreviousMode; // r15
  int inserted; // edi
  _QWORD *v10; // rdi
  int v11; // r12d
  int v12; // edx
  int v13; // eax
  __int64 v15; // rcx
  PVOID *Object; // [rsp+20h] [rbp-68h]
  PVOID v17; // [rsp+50h] [rbp-38h] BYREF
  PVOID v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a5 & 2) == 0 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a1;
      *(_QWORD *)v15 = *(_QWORD *)v15;
      goto LABEL_3;
    }
LABEL_23:
    inserted = -1073741581;
    goto LABEL_14;
  }
LABEL_3:
  if ( !a4
    || (v17 = 0LL,
        inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &v17, 0LL),
        v7 = v17,
        inserted >= 0) )
  {
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ObpDirectoryObjectType,
                 a3,
                 PreviousMode,
                 (__int64)Object,
                 344,
                 0,
                 0,
                 &v18,
                 0LL);
    if ( inserted >= 0 )
    {
      v10 = v18;
      memset_0(v18, 0, 0x158uLL);
      v10[37] = 0LL;
      *((_DWORD *)v10 + 85) = -1;
      v11 = 0;
      if ( v7 )
      {
        v11 = 4;
        v10[39] = v7;
        v7 = 0LL;
        v17 = 0LL;
        if ( RtlIsSandboxedToken(0LL, PreviousMode) )
          v11 = 20;
      }
      v12 = v11 | 8;
      if ( (a5 & 1) == 0 )
        v12 = v11;
      v13 = v12 | 0x20;
      if ( (a5 & 2) == 0 )
        v13 = v12;
      *((_DWORD *)v10 + 84) |= v13;
      inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v10, 0LL, a2, 0, 0, 0LL, (__int64)&v19);
      v18 = 0LL;
      *a1 = v19;
    }
  }
LABEL_14:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v18 )
    ObfDereferenceObject(v18);
  return (unsigned int)inserted;
}
