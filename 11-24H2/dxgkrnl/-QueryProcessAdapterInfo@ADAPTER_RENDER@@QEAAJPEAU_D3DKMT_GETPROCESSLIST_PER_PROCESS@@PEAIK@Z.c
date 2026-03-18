/*
 * XREFs of ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x14019F90C
 * Callers:
 *     NtDxgkGetProcessList @ 0x1401B0A20 (NtDxgkGetProcessList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::QueryProcessAdapterInfo(
        ADAPTER_RENDER *this,
        void **a2,
        unsigned int *a3,
        ACCESS_MASK a4)
{
  unsigned int v4; // r15d
  char *v5; // rbp
  __int64 v9; // rsi
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v13; // eax
  PVOID Object; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v5 = (char *)this + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  LODWORD(v9) = *((_DWORD *)this + 78);
  if ( (unsigned int)v9 <= *a3 && a2 )
  {
    v10 = (_QWORD *)((char *)this + 296);
    v9 = 0LL;
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      do
      {
        if ( *((_BYTE *)v11 + 21) )
        {
          Object = *(PVOID *)(*(v11 - 3) + 56LL);
          ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType();
          v13 = ObOpenObjectByPointer(Object, 0x400u, 0LL, a4, ObjectType, 1, &a2[v9]);
          if ( v13 >= 0 )
          {
            v9 = (unsigned int)(v9 + 1);
          }
          else
          {
            WdLogSingleEntry2(3LL, Object, v13);
            WdLogGlobalForLineNumber = 4687;
          }
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v10 );
      v4 = 0;
    }
  }
  else
  {
    v4 = -1073741789;
  }
  *a3 = v9;
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
