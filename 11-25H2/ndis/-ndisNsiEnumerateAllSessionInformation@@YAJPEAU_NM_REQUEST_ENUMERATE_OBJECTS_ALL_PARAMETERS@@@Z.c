/*
 * XREFs of ?ndisNsiEnumerateAllSessionInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CF3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisNsiEnumerateAllSessionInformation(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  int v1; // edx
  __int64 v2; // rbx
  unsigned int v3; // esi
  int v5; // edx
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned int v9; // ebp
  KIRQL v10; // al
  unsigned int v11; // r9d
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // r8

  v1 = *((_DWORD *)a1 + 8);
  v2 = 0LL;
  v3 = 0;
  if ( !v1 )
    return 3221225485LL;
  v5 = v1 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      return 3221225474LL;
    return 3221225485LL;
  }
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_QWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 22);
  v10 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
  v11 = dword_140126990;
  v12 = 0;
  if ( dword_140126990 )
  {
    if ( v7 )
    {
      v13 = qword_140126A30;
      do
      {
        if ( v13[2] )
        {
          if ( (unsigned int)v2 < v9 )
          {
            *(_DWORD *)(v7 + 4 * v2) = v12;
            if ( v8 )
              *(_DWORD *)(v8 + 4 * v2) = *(_DWORD *)v13;
            v2 = (unsigned int)(v2 + 1);
          }
          ++v3;
        }
        ++v12;
        v13 += 3;
      }
      while ( v12 < v11 );
    }
    else
    {
      v14 = qword_140126A30;
      v15 = (unsigned int)dword_140126990;
      do
      {
        if ( v14[2] )
        {
          if ( (unsigned int)v2 < v9 )
          {
            if ( v8 )
              *(_DWORD *)(v8 + 4 * v2) = *(_DWORD *)v14;
            v2 = (unsigned int)(v2 + 1);
          }
          ++v3;
        }
        v14 += 3;
        --v15;
      }
      while ( v15 );
    }
  }
  KeReleaseSpinLock(&qword_1401269E0, v10);
  *((_DWORD *)a1 + 22) = v3;
  return v9 < v3 ? 0x105 : 0;
}
