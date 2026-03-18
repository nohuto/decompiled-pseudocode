/*
 * XREFs of NtQueryMutant @ 0x140A31B10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x14048FB8C (KeQueryOwnerMutant.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryMutant(HANDLE Handle, int a2, CLIENT_ID *a3, unsigned int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r14
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  NTSTATUS v11; // esi
  int v12; // r8d
  char v13; // al
  bool v14; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CLIENT_ID ClientId; // [rsp+38h] [rbp-30h] BYREF

  ClientId = 0LL;
  if ( !a2 )
  {
    if ( a4 == 8 )
      goto LABEL_3;
    return 3221225476LL;
  }
  if ( a2 != 1 )
    return 3221225475LL;
  if ( a4 != 16 )
    return 3221225476LL;
LABEL_3:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    v9 = (_DWORD *)a5;
    if ( a5 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v10 = a5;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  else
  {
    v9 = (_DWORD *)a5;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( a2 )
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
      {
        *a3 = ClientId;
        if ( v9 )
          *v9 = 16;
      }
      else
      {
        *a3 = ClientId;
        if ( v9 )
          *v9 = 16;
      }
    }
    else
    {
      v12 = *((_DWORD *)Object + 1);
      v13 = *((_BYTE *)Object + 48) & 1;
      v14 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
      {
        LODWORD(a3->UniqueProcess) = v12;
        BYTE4(a3->UniqueProcess) = v14;
        BYTE5(a3->UniqueProcess) = v13;
        if ( v9 )
          *v9 = 8;
      }
      else
      {
        LODWORD(a3->UniqueProcess) = v12;
        BYTE4(a3->UniqueProcess) = v14;
        BYTE5(a3->UniqueProcess) = v13;
        if ( v9 )
          *v9 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v11;
}
