/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x18001778C
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180059540 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180018658 (--$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123.c)
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x1800515F8 (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  __int64 v3; // rcx
  __int64 *v4; // rbp
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 *k; // rbx
  unsigned int v11; // r14d
  char *v12; // rsi
  __int64 *v13; // rbp
  __int64 *m; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // rdi
  __int64 *ii; // rbx
  __int64 *n; // rdi
  __int64 *j; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26[4]; // [rsp+28h] [rbp-20h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = (__int64 *)*((_QWORD *)this + 10);
  for ( i = (__int64 *)*((_QWORD *)this + 9);
        i != v4 && !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v3, i);
        ++i )
  {
    ;
  }
  if ( i != v4 )
  {
    for ( j = i + 1; j != v4; ++j )
    {
      if ( !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v3, j) )
      {
        v21 = 0LL;
        if ( &v25 != j )
        {
          v21 = *j;
          *j = 0LL;
        }
        v22 = *i;
        *i = v21;
        v25 = v22;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
        ++i;
      }
    }
  }
  v6 = (__int64 *)*((_QWORD *)this + 10);
  if ( i != v6 )
  {
    v7 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v6, *((_QWORD *)this + 10));
    v8 = (__int64 *)*((_QWORD *)this + 10);
    v9 = v7;
    for ( k = (__int64 *)v7; k != v8; ++k )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(k);
    *((_QWORD *)this + 10) = v9;
  }
  v11 = 0;
  v12 = (char *)this + 96;
  do
  {
    v13 = (__int64 *)*((_QWORD *)v12 + 1);
    for ( m = *(__int64 **)v12;
          m != v13 && !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v6, m);
          ++m )
    {
      ;
    }
    if ( m != v13 )
    {
      for ( n = m + 1; n != v13; ++n )
      {
        if ( !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v6, n) )
        {
          v23 = 0LL;
          if ( v26 != n )
          {
            v23 = *n;
            *n = 0LL;
          }
          v24 = *m;
          *m = v23;
          v26[0] = v24;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26);
          ++m;
        }
      }
    }
    v6 = (__int64 *)*((_QWORD *)v12 + 1);
    if ( m != v6 )
    {
      v15 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v6, *((_QWORD *)v12 + 1));
      v16 = (__int64 *)*((_QWORD *)v12 + 1);
      v17 = v15;
      for ( ii = (__int64 *)v15; ii != v16; ++ii )
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ii);
      *((_QWORD *)v12 + 1) = v17;
    }
    ++v11;
    v12 += 24;
  }
  while ( v11 < 5 );
  if ( v1 )
    LeaveCriticalSection(v1);
}
